# Program to convert string into datetime object

import datetime

#string to be converted
datetime_string = '27-12-2024 12:00:00'
#conerting string into datetime object
datetime_object = datetime.datetime.strptime(datetime_string, '%d-%m-%Y %H:%M:%S')
#printing datetime
print(datetime_object)

