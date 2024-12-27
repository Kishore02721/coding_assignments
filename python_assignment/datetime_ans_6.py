# Program to Calculate number of days between two given dates

import datetime

#Dates to find difference
date_1 = datetime.date(2024, 12, 27)
date_2 = datetime.date(2025, 1, 1)
#Subracting dates
date_difference = date_2 - date_1
#Converting date difference into days
days_between = date_difference.days
#priting days between dates
print(days_between)

