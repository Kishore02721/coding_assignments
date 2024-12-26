#Program to replace a substring with new substring in a string

def replace_substring(string,current_substring,new_substring):
    """To replace a substring with new substring in a string
    
    Parameters:
    string(str): string which has given substring
    current_substring(str): the substring to be replaced
    new_substring(str): the new substring
    
    Return:
    new_string(str): new string formed after replacing
    """
    new_string = string.replace(current_substring,new_substring)
    return new_string

if __name__ == '__main__':
    string = input('Enter a string: ')
    current_substring = input('Enter a substring: ')
    new_substring = input('Enter a new substring: ')
    new_string = replace_substring(string,current_substring,new_substring)
    print(new_string)

