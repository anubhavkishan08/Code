t=int(input())
l=[]
for i in range(t):
    l.append([input(),float(input())])
marks = set([l[x][1] for x in range(t)])
marks=list(marks)
print(marks)
marks.sort()
l = [x[0] for x in l if x[1] == marks[1]]
l.sort()
print(l)
for i in l:
    print(i)
