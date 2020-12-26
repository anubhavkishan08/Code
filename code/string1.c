s=int(input())
a=[]
for i in range(s):
    b=str(input())
    op=list(map(int, str(b)))
    c=op[0]
    if c>=4 and c<7:
        print("yes")
    else:
        print("no")