#include<stdio.h>
#include<stdlib.h>
#define infinity 999

void sssp(int sr,int x[10][10],int d[10],int n)
{
    int i,j,k,m,min;
    for(i=0;i<n;i++)
        d[i]=x[sr][i];
    for(j=1;j<n;j++)
    {
        for(k=0;k<n;k++)
        {
            if(j!=sr)
            {
                min=999;
            }
            for(m=0;m<n;m++)
            {
                if(m!=j)
                {
                    if(min>d[m]+x[m][j])
                        min=d[m]+x[m][j];
                }
            }
            if(d[j]>min)
                d[j]=min;
        }
    }
}
int main()
{
    int i,j,n,k,m,x[10][10],d[10],sr;
    printf("enter the no of nodes");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
            scanf("%d",&x[i][j]);
    }
    printf("enter the source node");
    scanf("%d",&sr);
    sssp(sr,x,d,n);
    for(i=0;i<n;i++)
    {
        if(sr!=i)
        {
            printf("\n\n\t%d->%d=%d",sr,i,d[i]);
        }
    }
    return 0;
}
