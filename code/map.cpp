#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string> mp;
    int t,n,i,a,q;
    string s;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        cin>>s;
        //mp.insert(pair<int, string>(n,s));
        mp.add(n,s);
    }
    cin>>q;
    while(q--)
    {
        cin>>a;
    for(auto it: mp)
    {
        if(it.first==a)
        cout<<it.second<<endl;
    }
   }
}
