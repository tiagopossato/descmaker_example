import subprocess
import os
import re
import shutil

input_file = 'descmaker\supremica_examples\example.wmod'

output_dir = 'supervisor_tmp'

def copy_directory(source, destination, exclude_files=None, exclude_dirs=None):
    if os.path.exists(destination):
        shutil.rmtree(destination)
    os.makedirs(destination)

    for item in os.listdir(source):
        source_path = os.path.join(source, item)
        destination_path = os.path.join(destination, item)

        if os.path.isfile(source_path):
            # Skip the excluded files based on regex pattern
            # print(f"Copying file: {source_path}, item: {item}")
            if exclude_files and any(re.match(pattern, item) for pattern in exclude_files):
                # print(f"Skipping file: {source_path}")
                continue

            # Copy files
            shutil.copy2(source_path, destination_path)
        elif os.path.isdir(source_path):
            # Skip the excluded directories based on regex pattern
            # print(f"Copying dir: {source_path}")
            if exclude_dirs and any(re.match(pattern, item) for pattern in exclude_dirs):
                # print(f"Skipping dir: {source_path}")
                continue

            # Recursively copy directories
            copy_directory(source_path, destination_path, exclude_files, exclude_dirs)

# verify if '../descmaker/app/descmaker.py' exists
if not os.path.exists('descmaker/app/descmaker.py'):
    # update submodule
    print("\n\t---> Updating submodule...\n")
    
    result = subprocess.Popen(['git', 'submodule', 'update', '--init', '--remote', '--merge'])
    result.wait()
    if(result.returncode != 0):
        print("\n\t---> Error updating submodule!\n")
        exit(0)
    else:
        print("\n\t---> Submodule updated successfully!\n")


result = subprocess.Popen(['python', 'descmaker/app/descmaker.py', '-i', input_file, '-o', output_dir])
result.wait()
if(result.returncode != 0):
    print("\n--->Error running descmaker!\n")
    exit(0)
else:
    print("\n--->descmaker executed successfully!\n")

# copy output_dir/lib/supervisor to application/lib/supervisor
copy_directory(output_dir + '/lib/supervisor', 'application/lib/supervisor')

# copy output_dir/src/supervisors to application/src/supervisors
copy_directory(output_dir + '/src/supervisors', 'application/src/supervisors')

shutil.rmtree(output_dir)
