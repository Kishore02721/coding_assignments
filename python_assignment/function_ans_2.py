#Program to create a recursive function that calls itself

def factorial(number):
    """
    To find the factorial of given number

    Parameter:
    number (int): the number whose factorial to be found

    Return:
    int: it is factorial value of given number
    """
    if number > 1:
        return  number * factorial(number-1) #function calls itself
    else:
        return 1

if __name__ == '__main__':
    factorial_to_be_found = 4
    factorial_value = factorial(factorial_to_be_found)
    print(f'Factorial of given number is {factorial_value}')
