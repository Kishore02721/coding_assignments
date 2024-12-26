# Program to create a new list from a two list using the following condition
# Given a two list of numbers, write a program to create a new list such that
# the new list should contain odd numbers from the first list and even numbers
# from the second list.

def newly_formed_list(list_1,list_2):
    """
    to create a new list from a two list using the following condition
    Given a two list of numbers, write a program to create a new list such that
    the new list should contain odd numbers from the first list and even numbers
    from the second list.

    Parameters:
    list_1 (list): list whose odd numbers to be appended
    list_2 (list): list whose even numbers to be appended

    Return:
    new_list: new list formed from above condition
    """
    new_list = [x for x in list_1 if x % 2 != 0] + [x for x in list_2 if x % 2 == 0]
    return new_list

if __name__ == '__main__':
    list_1 = [1,2,3,4,5,6,7,8,9,10]
    list_2 = list(range(11,21))
    new_list = newly_formed_list(list_1,list_2)
    print(new_list)
    
