#Program to reverse a string on spaces

def reverse_string(string):
    """To reverse a string on spaces
    
    Parameters:
    string: string which is to be reversed
    """
    reversed_string = string[::-1]
    print(f'Reversed string is "{reversed_string}"')

if __name__ == '__main__':
    string = input('Enter a string: ')
    reverse_string(string)


