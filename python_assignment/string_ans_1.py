#Program to count number of times a substring occures in a main string

def count_substring(main_string, sub_string):
    """
    Count number of times a substring occures in a main string

    Parameters:
    main_string (str) : the string in which we search for sub-string
    sub_string (str) : the substring which is taken as count

    Return:
    int: count of times sub-string occured in main string
    """
    return main_string.count(sub_string)

if __name__ == '__main__':
    main_string = input('Enter a string: ')
    sub_string = input('Enter a substring: ')
    count = count_substring(main_string, sub_string)
    print(f'Number of times "{sub_string}" occured in "{main_string}" is {count}')

