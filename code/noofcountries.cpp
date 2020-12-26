#include <bits/stdc++.h>
using namespace std;
map<int,int> mp;
int main()
{
    int n,p,a,b,c,d;
    cin>>n;
    p=n-1;
    while(p--)
    {
        cin>>a>>b;
         c=min(a,b);
         d=max(a,b);
         if (mp.find(c)==mp.end() && mp.find(d)==mp.end()) 
           mp.insert({c,d});
    }
    cout<<mp.size()<<endl;
}