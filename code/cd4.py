t=int(input())
for _ in range(t):
    l=[]
    k=[]
    n=int(input())
    for i in range((4*n)-1):
        a,b=map(int,input().split())
        l.append(a)
        k.append(b)
    l1=set(l)
    k1=set(k)
    l1=list(l1)
    print(l1)
    k1=list(k1)
    print(k1)
    for i in range(len(l1)):
        if(((l.count(l1[i]))%2)!=0):
            c=l1[i]
        if(((k.count(k1[i]))%2)!=0):
            d=k1[i]
    print(c,d)