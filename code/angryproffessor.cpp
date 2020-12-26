#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,c=0,k,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>k;
        vector<int> a(n);
        for(i=0;i<n;i++)
            cin>>a[i];

        for(i=0;i<a.size()-1;i++)
{
  if(a[i+1]-a[i]<=0)
    c++;
}
 if(c==k)
   cout<<"NO"<<"\n";
else
 cout<<"YES"<<"\n";
    }
}
