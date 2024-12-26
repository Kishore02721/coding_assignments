#Delete the second column from a given array and insert
#the following new column in its place.Array:[[34,43,73],
#[82,22,12],[53,94,66]].New arr: [[10,10,10]]

import numpy as np

#Given array
array = np.array([[34,43,73],
                  [82,22,12],
                  [53,94,66]])

# New column to insert
new_column = np.array([10, 10, 10])
# Deleting the second column (index 1)
array = np.delete(array, 1, axis=1)
# Inserting the new column at index 1
array = np.insert(array, 1, new_column, axis=1)
print(array)

