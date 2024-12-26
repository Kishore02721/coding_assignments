#Program to To print characters from a string that are present at an even index

def print_character(string):
    """
    To print characters from a string that are present at an even index

    Parameter:
    string (str): The string which is to be printed
    """
    print(f'characters present in even index numbers of string: "{string[::2]}"')

if __name__ == '__main__':
    string = input("Enter a string: ")
    print_character(string)
