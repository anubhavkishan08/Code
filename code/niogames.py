def f(p,q):
    c=0
    b=0
    for i in range(p+1,len(q)):
        if q[p]<q[i]:
            c=1
            b=i
            break
    if c==0:
        return int(-1)
    else:
        return b
def g(p,q,n):
    c=0
    b=0
    z=n
    if z==-1:
        for i in range(p+1,len(q)):
            if z>q[i]:
                c=1
                b=i
                break
    else:
        for i in range(p+1,len(q)):
            if q[p]>q[i]:
                c=1
                b=i
                break
    if c==0:
        return int(-1)
    else:
        return q[b]
m=int(input())
a=[]
for i in range(m):
    a.append(int(input()))
for i in range(len(a)):
    x=f(i,a)
    z=0
    if x==-1:
        x=i
        z=-1
    y=g(x,a,z)
    print(y,end=' ')