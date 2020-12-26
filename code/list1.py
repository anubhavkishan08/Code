l=[]
n=int(input())
for i in range(1,n+1):
    e=input()
    l.append(e)
    d=""
d=d.join(l)
c=int(d)+1
c=str(c)
temp=[]
for j in range(len(c)):
    temp.append(int(c[j]))
print (temp)