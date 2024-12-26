#Program to check if the first and last number of a list is the same

def check_elements(to_check_list):
    """
    Check if the first and last number of a list is the same

    Parameters:
    to_check_list(list): list to be checked

    Return:
    bool: if equal then gives true else false
    """
    index_of_last_element = len(to_check_list) - 1 #to get index of last element
    #to check whether first and last elements are equal
    if to_check_list[0] == to_check_list[index_of_last_element]:
        return True
    else:
        return False

if __name__ == '__main__':
    my_list = [1,2,3,4,5,6,7,8,9,1]
    check = check_elements(my_list)
    if check == True:
        print(f'First and last number of list are equal')
    else:
        print(f'First and last number of list are not equal')

