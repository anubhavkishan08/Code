x = [2, 3, 4, 5, 6]  
y = map(lambda v : v * 5, filter(lambda u : u % 2, x)) 
print (y) 
