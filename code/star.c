#include<conio.h>
#include<math.h>
int main()
{
    int a[10][10];
    int i,j,n,m;
    int mult=1;
    int c=0;
    printf("enter the row");
    scanf("%d",&n);
    printf("enter the column");
    scanf("%d",&m);
    printf("enter the matrix");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=1;i<=n;i++)
    {
        printf("\n");
        for(j=1;j<=m;j++)
        {
            printf("\t%d",a[i][j]);
        }
    }
    for(j=1;j<=m;j++)
    {
        for(i=1;i<=n;i++)
        {
            mult=mult*a[i][j];
        }
         c++;
        printf("\n product of column %d is %d",c,mult);
        mult=1;
        }
    }


