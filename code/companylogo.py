from collections import Counter
s = input()
s=sorted(s)
c=Counter(s).most_common(3)
for i,k in c:
    print(i,k)