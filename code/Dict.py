d={}
d["xyz"]=123
print (d)
print(d.keys())
print(d.values())
for i in d:
    print ("%s %d" %(i,d[i]))
for index, key in enumerate(d): 
    print (index, key, d[key])
print ('xyz' in d)
del d['xyz']
print (d)
print ('xyz' in d)