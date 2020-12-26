t = int(input())
studs = {}
for i in range(0, t):
    name, math, physic, chemistry = input().split(" ")
    studs[name] = (float(math) + float(physic) + float(chemistry)) / 3
name1 = input()
if name1 in studs:
    print("%.2f" % studs[name1])
else:
    print ("No")