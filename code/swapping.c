#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    a=a*b;
    b=a/b;
    a=a/b;
    a=a xor b;
    b=a xor b;
    a=a xor b;
    printf("\n%d%d",a,b);
}
