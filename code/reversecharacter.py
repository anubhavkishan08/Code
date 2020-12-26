n=input()
d=dict()
s1=""
for i in range(len(n)):
    if(n[i].isalnum()==False):
        d.update({(i):n[(i)]})
    else:
        s1=s1+n[i]
rev=list(s1[::-1])
for i ,j in d.items():
    rev.insert(i,j)
print(rev)
print("".join(rev))