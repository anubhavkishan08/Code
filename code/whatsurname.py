s=input()
s1=input()
count=0
for i in range(0,len(s)):
    if s[i:].startswith(s1):
        count=count+1
print(count)