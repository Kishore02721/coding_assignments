#Program to find day of week for given date

import datetime

#given date
given_date = datetime.datetime(2024, 12, 27)
#To find the day of week
day_of_week = given_date.strftime('%A')
# Print the day of the week
print(day_of_week)

