import subprocess
import os
from utils import copy_directory, remove_directory, copy_file

execution_path = os.getcwd()

input_file = os.path.join(execution_path,'pick_and_place_basic.wmod')
output_dir = os.path.join(execution_path, 'supervisor_tmp')


# verify if '../descmaker/app/descmaker.py' exists
if not os.path.exists('descmaker/app/descmaker.py'):
    # update submodule
    print("\n\t---> Updating submodule...\n")
    
    result = subprocess.Popen(['git', 'submodule', 'update', '--init', '--remote', '--merge'])
    result.wait()
    if(result.returncode != 0):
        print("\n\t---> Error updating submodule!\n")
        exit(-1)
    else:
        print("\n\t---> Submodule updated successfully!\n")

result = subprocess.Popen(['python3', 'descmaker/app/descmaker.py', '-i', input_file, '-o', output_dir])
result.wait()
if(result.returncode != 0):
    print("\n--->Error running descmaker!\n")
    exit(-1)
else:
    print("\n--->descmaker executed successfully!\n")

copy_directory(os.path.join(output_dir,'src','supervisors'), os.path.join(execution_path, 'application','src','supervisors'), overwrite=True)

copy_file(os.path.join(output_dir,'src','event_handler','events.h'), os.path.join(execution_path, 'application','src','event_handler','events.h'))
copy_file(os.path.join(output_dir,'src','event_handler','events.c'), os.path.join(execution_path, 'application','src','event_handler','events.c'))

remove_directory(output_dir)
