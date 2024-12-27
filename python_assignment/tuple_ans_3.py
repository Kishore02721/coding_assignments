# Program to sort a tuple of tuples by 2nd item

#example tuple
my_tuple = (('a', 44), ('b', 25), ('c', 9), ('d', 52))
#sorting the tuple
sorted_list = sorted(my_tuple, key =  lambda x : x[1])
#converting list into tuple
sorted_tuple = tuple(sorted_list)
#printing sorted tuple
print(sorted_tuple)

