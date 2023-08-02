Let’s copy all files from the d:\vacation folder and all files in sub-folders to the d:\all folder recursively.

Open a Command Prompt window.
Run the following commands one by one and press ENTER after each line:
md "d:\all"
cd /d "d:\vacation"
for /r %d in (*) do copy "%d" "d:\all\"
