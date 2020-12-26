str=input()
count=0
if(str=='doge'):
    count=count+1
c=len(str)
print(c)
for i in range(0, len(str)-3):
    if str[i] == 'd' and str[i+1] == 'o' and str[i+3] == 'e':
        count=count+1

print( count)
#You are given a string str of lowercase letters. You need to count the number of times the word doge appears in the string. Also, the g in doge can be replaced by any letter from a-z so dope is also valid.