#include<stdio.h>
int main()
{
   int n, c;
   scanf("%d", &n);
   int a[n];
   for (c=0;c<n;c++)
   {
      scanf("%d",&a[c]);
   }
for (c = n - 1; c >= 0; c--)
{
printf("%d ",a[c]);
 }
return 0;
}
