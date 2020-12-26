a=[]
t=input()
n=len(t)
for j in range(n): 
    for len in range(j+1,n+1): 
        q=int(t[j:len])
        for k in range(1,q+1):
            if((k*(k+1))==q):
                a.append(q)
a.sort()
a=list(dict.fromkeys(a))
for i in a:
    print(i)