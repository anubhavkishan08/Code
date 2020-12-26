n=int(input())
l=list(map(int,input().split()))
l.sort()
while(l[-1]==l[-2]):
    l.pop()
print(l[-2])