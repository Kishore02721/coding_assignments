# Program to Subtract a week (7 days) from a given date in Python

import datetime

# original date
original_date = datetime.datetime(2024, 12, 27)
# Subtract 7 days from the given date using timedelta
new_date = original_date - datetime.timedelta(days=7)
# Print the new date
print(new_date)

