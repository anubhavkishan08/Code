import math
a=[]
n=input()
res = [n[i: j] for i in range(len(n))
        for j in range(i + 1, len(n) + 1)]
print(res)
results = list(map(int, res))
results = list(dict.fromkeys(results))
for k in results:
    x=int(math.sqrt(k))
    if((x*(x+1))==k):
        if(k>0):
            a.append(k)
    else:
        k=k+1
a.sort()
b=list(map(str,a))
print(",".join(b))
##for i in a:
## print(i)