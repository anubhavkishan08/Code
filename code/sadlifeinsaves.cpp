#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,q,r,i,u,v,w,a,b,sum=0;
    cin>>t;
    map<int,int> mp;
    while(t--)
    {
        cin>>n>>q>>r;
        for(i=0;i<n-1;i++)
        {
            cin>>u>>v>>w;
            mp.insert({v,w});
        }
        cin>>a>>b;
          for (auto itr = mp.begin(); itr != mp.end(); itr++) {
           if(itr->first==a){
                  sum+=itr->second;
                  a=b;}
          }
          cout<<sum;
    }
}
