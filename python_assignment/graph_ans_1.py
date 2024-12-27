# Program to Read Total profit of all months and show it using a line plot
# Total profit data provided for each month. Generated line plot must include
# the following properties: –
# X label name = Month Number
# Y label name = Total profit

import matplotlib.pyplot as plt
import pandas as pd

#Data for graph
data = {
'Month': [1,2,3,4,5,6,7,8,9,10,11,12],
'Total Profit': [5000,6000,7000,5000,5667,6789,3456,6775,6789,2345,7766,6675]
}
#Dataframe by panda
df = pd.DataFrame(data)
#To convert pandas series into Numpy array
months = df['Month'].values
profits = df['Total Profit'].values
#Graph Customization
plt.plot(months, profits, marker='o', color='b', label='Total Profit')
plt.xlabel('Month number')
plt.ylabel('Total profit')
plt.title('Company profit per month')
plt.show()

