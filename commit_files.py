import subprocess
import os

def run_cmd(cmd):
    result = subprocess.run(cmd, shell=True, capture_output=True, text=True)
    return result.stdout.strip()

status_output = run_cmd("git status -s")
lines = status_output.split('\n')

for line in lines:
    if not line:
        continue
    status_code = line[:2]
    filepath = line[3:]

    # determine prefix and message
    filename = os.path.basename(filepath)
    if status_code.startswith(' D') or status_code.startswith('D '):
        prefix = "refactor"
        msg = f"remove {filename}"
        cmd_add = f"git add {filepath}"
    elif status_code.startswith('??') or status_code.startswith(' A'):
        if filename == 'a.out' or filename.endswith('.txt') or 'output' in filename:
            prefix = "chore"
            msg = f"add {filename}"
        else:
            prefix = "feat"
            msg = f"add {filename} solution"
        cmd_add = f"git add {filepath}"
    elif status_code.startswith(' M') or status_code.startswith('M '):
        prefix = "refactor"
        msg = f"update {filename}"
        cmd_add = f"git add {filepath}"
    else:
        prefix = "chore"
        msg = f"update {filename}"
        cmd_add = f"git add {filepath}"

    full_msg = f"{prefix}: {msg}"
    
    print(f"Executing: {cmd_add}")
    subprocess.run(cmd_add, shell=True)
    
    commit_cmd = ['git', 'commit', '-m', full_msg]
    print(f"Executing: {' '.join(commit_cmd)}")
    subprocess.run(commit_cmd)

print("Done committing files.")
