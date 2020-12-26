lst = list(map(int,input().split(",")))
a = sum(lst[:lst.index(5)])
print(a)
b = sum(lst[lst.index(8)+1:])
print(b)
n1 = a+b
print(n1)
rest = lst[lst.index(5):lst.index(8)+1]
print(rest)
n2 = ""
for i in rest:
    n2+=str(i)
print(n2)
print(int(n2)+n1)