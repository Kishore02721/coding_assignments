#Program to add two numbers and 5
 
def add_outer_function (add_number1, add_number2):
    """
    To add given two number and integer 5 and return it
    
    Parameters:
    add_number1 (int): integer to be added
    add_number2 (int): integer to be added

    Return:
    int : addition result of given two numbers and 5
    """
    def add_inner_function(add_number1, add_number2):
         """
         To add given two number and return it
    
         Parameters:
         add_number1 (int): integer to be added
         add_number2 (int): integer to be added

         Return:
         int : addition result of given two numbers
         """
         return add_number1 + add_number2
         
    addition_result = add_inner_function(add_number1, add_number2)
    return addition_result + 5

if __name__ == '__main__':
    a = 10 #number to be added
    b = 20 #number to be added
    addition = add_outer_function(a,b)
    print(f'Addition of given two numbers is {addition}')
