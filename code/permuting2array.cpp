#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,i,c=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector<int> a(n);
        vector<int> b(n);
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            cin>>b[i];

        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),greater<int>());
     for(i=0;i<n;i++)
     {
         if(a[i]+b[i]!=k){
            c=1;
            break;}
     }
      if(c==1)
        cout<<"NO"<<"\n";
      else
        cout<<"YES"<<"\n";

    }
}
