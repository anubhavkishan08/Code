#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    vector<pair<int,int>> v;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>b[i];
    map<int,int> :: iterator it;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
                v.push_back({i,j});
        }
    }
    for(auto it: v)
        cout<<it.first<<it.second<<" ";
}

