n=map(int,input().split(","))
l=[]
l1=[]
for i in n:
    l.append(i)
for i in l:
    a=bin(i)
    print(a)
    for i in a:
        l1.append(i)
print(l1)