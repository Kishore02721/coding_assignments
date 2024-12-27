# Program for displaying subplots

import matplotlib.pyplot as plt
import pandas as pd

#Data for Graph
data = {
        'Month': [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12],
        'Toothpaste': [2000, 3000, 4567, 5433, 5677, 3455, 6776, 5444, 5678, 9877, 4332, 7655],
        'Facewash': [5655, 3545, 8676, 8665, 2434, 4533, 4555, 3443, 4534, 3434, 3434, 5676]
}
#Creating Dataframe
df = pd.DataFrame(data)
#converting pandas series into Numpy array
months = df['Month'].values
toothpaste = df['Toothpaste'].values
facewash = df['Facewash'].values
#2 rows and 1 column with figure width of 8 and height of 10 inches
fig, axes = plt.subplots(2, 1, figsize=(8,10))
fig.suptitle("Total Sales Data")
#customization of subplot 1
axes[0].plot(months, toothpaste, marker = 'o', color = 'b', label = 'toothpaste sales data')
axes[0].set_xlabel('Month number')
axes[0].set_ylabel('sales units in number')
axes[0].set_title('Total toothpaste sales')
#customization of subplot 2
axes[1].plot(months, facewash, marker = 'o', color = 'r', label = 'facewash sales data')
axes[1].set_xlabel('Month number')
axes[1].set_ylabel('sales units in number')
axes[1].set_title('Total Facewash sales')

plt.show()


