#include<stdio.h>
int main()
{
    int c= coverPoints();
}
    int coverPoints(int *A, int n1, int *B, int n2) {
scanf("%d",&n1);
for(int i=0;i<n1;i++)
{
    scanf("%d",A[i]);
}
scanf("%d",&n2);
for(int j=0;j<n2;j++)
{
    scanf("%d",&B[j]);
}
int length=0;
for( int i=0;i<n1;i++)
{
    for(int j=0;j<n2;j++)
    {
    length=B[j]-A[i];
    printf("%d",length);
}
}
}
