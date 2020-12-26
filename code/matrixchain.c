#include<stdio.h>
  int m[50][50];
    int s[50][50];
void matrix_chain(int n)
{
    int p[n];
    int i,j,k,l,q,a;
    int c=n-1;
    for(i=0;i<n;i++)
    {
        printf("eneter the p[%d] order",i+1);
        scanf("%d",&p[i]);
    }
    for(i=1;i<n;i++)
        m[i][i]=0;
    for(l=2;l<n;l++)
    {
        a=n-l;
        for(i=1;i<=a;i++)
        {
            j=i+l-1;
            m[i][j]=100000;
            for(k=i;k<j;k++)
            {
                q=m[i][k]+m[k+1][j]+(p[i-1]*p[k]*p[j]);
                if(q<m[i][j])
                {
                    m[i][j]=q;
                    s[i][j]=k;
                }
            }
        }
    }
}
int main()
{
    int n,i,j;
    printf("enter all the  matrix order");
    scanf("%d",&n);
    matrix_chain(n);
    printf(".....m table....\n");
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<n;j++)
    {
        if(m[j][i]!=0)
            printf("%d\t",m[j][i]);
    }
    printf("\n");
    }
    printf("....s table ....");
    for(i=1;i<n-1;i++)
    {
        for(j=n-1;j>=1;j--)
    {
        printf("\t%d",s[i][j]);
    }
    printf("\n");
}
printf("\t minimum multiplication =%d",m[1][n-1]);
}
