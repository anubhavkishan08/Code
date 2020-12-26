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