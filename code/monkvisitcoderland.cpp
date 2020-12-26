#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int i,sum=0,m,sum1=0;
        map<int,int> mp;
        vector<int> v;
        map<int,int> ::iterator it;
        int a,n,b;
         cin>>n;
        for(i=0;i<n;i++){
            cin>>a>>b;
            mp.insert(pair<int, int>(i+1,a));
        }
        for(auto it: mp){
              cout<<it.second*it.first<<"\n";
             }
             cout<<map.at("1");

            //cout<<sum1;
    }
}
