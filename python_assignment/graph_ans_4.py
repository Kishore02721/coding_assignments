# Program to Read sales data of bathing soap of all months and show it using a bar chart.
# Save this plot to your hard disk

import matplotlib.pyplot as plt
import pandas as pd

#Data for graph
data = {
'Month': [1,2,3,4,5,6,7,8,9,10,11,12],
'Bathing Soap': [5000,6000,7000,5000,5667,6789,3456,6775,6789,2345,7766,6675]
}
#Dataframe by panda
df = pd.DataFrame(data)
#To convert pandas series into Numpy array
months = df['Month'].values
bathing_soap = df['Bathing Soap'].values
#Graph Customization
plt.bar(months, bathing_soap, color='b', label='Bathing soap sales data')
plt.xlabel('Month number')
plt.ylabel('Sales units in number')
plt.title('Bathing Soap sales data')
plt.show()
#to save figure
plt.savefig('my_plot.png')
