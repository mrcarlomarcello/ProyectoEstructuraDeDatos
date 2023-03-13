import os

# Define the file extensions to search for
extensions = ['.c', '.h', '.cpp']

# Create a dictionary to store the functions in each file
functions = {}

# Traverse the current directory and search for files with the specified extensions
for root, dirs, files in os.walk('.'):
    for file in files:
        if file.endswith(tuple(extensions)):
            # Read the contents of the file
            with open(os.path.join(root, file), 'r') as f:
                content = f.read()
            
            # Find the functions in the file and store them in the dictionary
            file_functions = [line.strip() for line in content.split('\n') if line.strip().startswith('void ') or line.strip().startswith('int ') or line.strip().startswith('bool ') or line.strip().startswith('double ') or line.strip().startswith('float ') or line.strip().startswith('char ') or line.strip().startswith('string ') or line.strip().startswith('void* ') or line.strip().startswith('int* ') or line.strip().startswith('bool* ') or line.strip().startswith('double* ') or line.strip().startswith('float* ') or line.strip().startswith('char* ') or line.strip().startswith('string* ')]
            functions[file] = file_functions

# Display the list of files and functions in the project
print('C++ Project Functions\n')
for file, file_functions in functions.items():
    print('File:', file)
    print('Functions:')
    for func in file_functions:
        print('- ' + func)
    print()
