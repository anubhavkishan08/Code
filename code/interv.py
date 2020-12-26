a,d=input().split(" ")
for i in a:
    n=map(int,input().split(" "))
l=[]
for i in n:
    l.append(i)
for i in range(int(d)):
    a=l.pop(0)
    l.append(a)
for i in l:
    print(i ,end=" ")