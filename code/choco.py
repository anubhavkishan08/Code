n=int(input())
s=int(input())
kid, adult, old= input().split(" ")
d=2*int(kid)
s=s-d
e=3*int(adult)
s=s-e
f=4*int(old)
s=s-f
print(d+e+f)
print(s)