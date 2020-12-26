#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j,c=0;
    cin>>n>>k;
    vector<int> a;
    set<int> b;
   for(i=0;i<n;i++)
   {
       int n1;
       cin>>n1;
       b.insert(n1);
   }
    for(auto it :b)
    {
        a.emplace_back(it);
    }
    for(i=0;i<a.size();i++)
    {
        //cout<<a[i]<<" ";
        for(j=0;j<a.size();j++)
        {
            if(a[i]-a[j]==k)
                c++;
        }
    }
    cout<<c;

}
