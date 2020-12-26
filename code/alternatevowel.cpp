#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,m,n,c=0,d=0;
    char a[10][10];
    cin>>t;
    while(t--)
    {
        cin>>m;
        cin>>n;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }

           for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
             if(a[i][j]=='a'){
                a[i][j+1]=='b';
                c=c+1;
             }
             else
                c=0;
            }
        }
      cout<<c;
    }
}
