n=str(input())
l=[]
a=[]
b=[]
for i in n:
    l.append(i)
print(l)
for i in range(0, len(l)):
    if i % 2==0: 
        a.append(l[i]) 
    else : 
        b.append(l[i])
print(b)
for i in b:
    print(int(i)**2,end="")