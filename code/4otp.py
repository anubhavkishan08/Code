n=input()
s=""
i=0
for i in range(0,len(n)):
    if int(i)%2==1:
        s+=str(int(n[i])**2)
print(s)