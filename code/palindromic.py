def palincheck(num):
    s=str(num[::-1])
    print(s)
    if s==num:
        return True
    return False
n=str(input())
val=0
k=0
while(True):
    if(palincheck(n)):
        val=len(n)
        ##print(val)
        print(yes)
        break
    else:
        s1 = str(n[::-1])
       ## k=int(n)+int(s1)
        ##n=str(k)
        palincheck(n)