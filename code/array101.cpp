#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
    int a[100][100];
    int b[100][100];
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
       {
            cin>>a[i][j];
       }
    }

    for(i=1;i<=n;i++)
    {
     for(j=1;j<=m;j++)
     {
         b[j][i]=a[i][j];
     }
    }
     for(i=1;i<=m;i++)
    {
     for(j=1;j<=n;j++)
     {
         cout<<a[i][j];
         if (j == n - 1)
            cout<<"\n";
     }
    }
}
