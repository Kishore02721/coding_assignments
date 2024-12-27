#Program to convert two lists into dictionary

keys = ['Ten', 'Twenty', 'Thirty'] #list1 act as key
values = [10, 20, 30] #list2 act as value
#zipping two lists forms pairs between list then made into dictionary form
new_dict = dict(zip(keys,values))
print(new_dict) #printing newly formed dictionary

