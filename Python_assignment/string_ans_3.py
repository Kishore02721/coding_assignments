#Program to split a string on spaces

def split_string(string):
    """To split a string on spaces
    
    Parameters:
    string: string which is to be splitted
    """
    split_words = string.split()
    print(f'Spiltted words: "{split_words}"')

if __name__ == '__main__':
    string = input('Enter a string: ')
    split_string(string)
            
