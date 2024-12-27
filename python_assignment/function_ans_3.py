# Program to create a recursive function to calculate the sum of numbers
# from 0 to 10.

def sum_of_numbers(number):
    """
    To calculate sum of numbers from 0 to 10

    Return:
    Parameter:
    number (int): number until which to calculate sum

    int: it is sum of numbers
    """
    if number > 0:
        return  number + sum_of_numbers(number-1) #function calls itself
    else:
        return 0

if __name__ == '__main__':
    number_until_added = 10
    sum_calculated = sum_of_numbers(number_until_added)
    print(f'sum of numbers from 0 to {number_until_added} is {sum_calculated}')

