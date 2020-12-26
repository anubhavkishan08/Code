def nCr(n, r): 
    return (fact(n) / (fact(r) * fact(n - r))) %m
 
def fact(n): 
    res = 1
    for i in range(2, n+1): 
        res = res * i 
    return res

 
n = 3
r = 2
m=100000000008
print(int(nCr(n, r))) 
