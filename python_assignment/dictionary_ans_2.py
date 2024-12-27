#Program to initialize dictionary with default values

# Given lists
employees = ['Kelly', 'Emma']
defaults = {"designation": 'Developer', "salary": 8000}
# Initialize dictionary with default values
employee_dictionary = {employee: defaults.copy() for employee in employees}
print(employee_dictionary)

