# Program to Read all product sales data and show it using a multi line plot. Display the number
# of units sold per month for each product using multi line plots. (i.e.,Separate Plotline for
# each product ).

import matplotlib.pyplot as plt
import pandas as pd

#Data for graph
data = {
        'Month': [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12],
        'Toothpaste': [2000, 3000, 4567, 5433, 5677, 3455, 6776, 5444, 5678, 9877, 4332, 7655],
        'Facewash': [5655, 3545, 8676, 8665, 2434, 4533, 4555, 3443, 4534, 3434, 3434, 5676],
        'Facecream': [5667, 1234, 6453, 4657, 7565, 4532, 7555, 6343, 5656, 2312, 4544, 2321]
}
#Creating Dataframe with pandas
df = pd.DataFrame(data)
#converting pandas series into Numpy array
months = df['Month'].values
Toothpaste = df['Toothpaste'].values
Facewash = df['Facewash'].values
Facecream = df['Facecream'].values
#Graph Customization
plt.plot(months, Toothpaste, marker = 'o', color = 'b', label = 'Toothpaste sales Data')
plt.plot(months, Facewash, marker = 'o', color = 'r', label = 'Facewash sales Data')
plt.plot(months, Facecream, marker = 'o', color = 'g', label = 'Facecream sales Data')
plt.xlabel('Month Number')
plt.ylabel('Sales units in number')
plt.title('Sales Data')
plt.legend(loc='upper left')
plt.show()
