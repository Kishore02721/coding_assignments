#Program to check whether file is empty or not

import os

def is_file_empty(file_path):
    """
    To check whether file is empty or not
    
    Parameter:
    file_path (str): path of file to be checked
   
    Return:
    Boolean: True if empty else False    
    """
    # Check if the file exists and is empty
    return os.path.exists(file_path) and os.path.getsize(file_path) == 0

if __name__ == '__main__':
    file_path = input('Enter file to be checked: ')
    if is_file_empty(file_path):
        print("The file is empty.")
    else:
        print("The file is not empty.")

