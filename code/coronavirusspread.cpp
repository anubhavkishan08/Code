#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,j=1,diff=0;
    int a[100];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n-1;i++)
        {
          diff=a[i+1]-a[i];
          //cout<<diff<<" ";
        if(diff<=2)
          {
            j++;
          }
        }
        cout<<j<<" ";
        diff=0;
    }
}
