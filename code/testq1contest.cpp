#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,m;
    int sum=0,sum1=0;
    int a[100];
    cin>>n;
    cin>>m;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
        if(n==m)
        {
            for(i=0;i<n;i++)
            sum=sum+a[i];
        }
        else
        {
            for(i=0;i<m;i++)
            {
                sum=sum+a[i];
            }
            for(j=m;j<n;j++)
                sum1=sum1+a[j];
        }
   cout<<sum+(m*sum1);
}
