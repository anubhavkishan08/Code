import math
a=int(input())
b=int(input())
x=math.floor(math.log(b,a))
xPlusOne=x+1
number1=a**x
number2=a**xPlusOne
if(abs(number1-b)>abs(number2-b)):
    print( number2)
else:
    print(number1)
#You are given two numbers a and b. When a is raised to some power p, we get a number x. Now, you need to find what is the value of x that is closest to b.    