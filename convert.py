import subprocess
import os
from utils import copy_directory, remove_directory, copy_file

input_file = 'pick_and_place_basic.wmod'

output_dir = 'supervisor_tmp'


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

# copy output_dir/lib/supervisor to application/lib/supervisor
# copy_directory(output_dir + '/lib/supervisor', 'application/lib/supervisor')

# copy output_dir/src/supervisors to application/src/supervisors
copy_directory(output_dir + '/src/supervisors', 'application/src/supervisors')

copy_file(output_dir + '/src/event_handler/events.h', 'application/src/event_handler/events.h')

remove_directory(output_dir)
