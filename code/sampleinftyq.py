from itertools import permutations
n1=input().split(",")
n=list(permutations(n1))
n2=[]
n3=[]
for i in n:
    b="".join(i)
    n2.append(b)
for i in n2:
    if i not in n3:
        n3.append(i)
print(max(n3))
print(len(n3))