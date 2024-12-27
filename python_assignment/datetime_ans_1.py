# Program to current date and time

import datetime

#Getting current datetime and storing in datetime datatype
current_datetime = datetime.datetime.now()
#changing format of datetime to desired format
formated_datetime = current_datetime.strftime('%d-%m-%Y  %H:%M:%S')
#Printing the datetime
print(f'Current Date and time(dd-mm-yyyy H:M:S) is {formated_datetime}')
