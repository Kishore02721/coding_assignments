#Return array of odd rows and even columns from below numpy array

import numpy as np

array = np.array([[34, 43, 73],
                  [82, 22, 12],
                  [53, 94, 66]])

resultant_array = array[::2, 1::2]
print(resultant_array)

