##LENGTH OF LONGEST SUBSTRING
s=input()
s1=""
for i in range(len(s)):
    if(s[i] in s1):
        break
    else:
        s1=s1+s[i]
print(len(s1))