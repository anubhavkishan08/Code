#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,k,c=0,d=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector<int> a(n);
        for(i=0;i<n;i++)
          cin>>a[i];
        for(i=0;i<n;i++)
           if(a[i]-a[i+1]==1  && a[i+1]-a[i+2]==1)
                    c++;

        cout<<c;
        c=0;
    }
}
