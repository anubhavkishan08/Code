Dict = {1: 'Geeks', 'name': 'For', 3: 'Geeks'}

# Deleting a key 
# using pop() method
pop_ele = Dict.pop(1)
print('\nDictionary after deletion:',end="")
print(Dict)
print('Value associated to poped key is:',end="" )
print(pop_ele)
pop1=Dict.popitem()
print(pop1)
print(Dict)