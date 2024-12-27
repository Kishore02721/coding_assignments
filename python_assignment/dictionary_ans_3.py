# Program to check if a value exist in a dictionary

value_to_check = 'apple'
dict_to_check = {'fruit':'apple','vegetable':'carrot'}
values_of_dict = dict_to_check.values()
exist = False
#to compare each values in dictionary with given value
for value in values_of_dict:
    if value_to_check == value:
        exist = True
#to check if exist is true or false
if exist == True:
    print(f'value "{value_to_check}" is present in the given dictionaty')
else:
    print(f'value "{value_to_check}" is not present in the given dictionaty')

