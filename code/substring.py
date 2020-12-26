##find OF  SUBSTRING
n=input()
n1=str(set(n))
print(n1)
l=[]
s = [n1[i: j]
for i in range(len(n1))
     for j in range(i + 1, len(n1) + 1)]
print((s))
for i in s:
    l.append(len(str(i)))
##print(b)
print(max((l)))