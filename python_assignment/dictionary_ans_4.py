#Program to change a value in nested dictionary

#Dictionary before change
dict_needs_change = {'fruit' : {'seeded' : 'apple', 'seedless' : 'grapes'},
                     'vegetable' : {'red' : 'tomato', 'orange' : 'beans'}} 
print(dict_needs_change) #print dictionary before change
#changing value in nested dictionary
dict_needs_change['vegetable']['orange'] = 'carrot'
print(dict_needs_change) #print dictionary after change
