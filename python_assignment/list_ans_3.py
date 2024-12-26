#Program to extract each digit from an integer in the reverse order.

def extract_integer(number_to_extract):
    """
    To extract each digit from an integer in the reverse order.
    
    Parameter:
    number_to_extract (int): integer in which extraction to be performed
    """
    while number_to_extract > 0:
        digit = number_to_extract % 10
        number_to_extract = number_to_extract // 10
        print(f'{digit}\n')

if __name__ == '__main__':
    number_to_extract = int(input('Enter a integer: '))
    extract_integer(number_to_extract)
