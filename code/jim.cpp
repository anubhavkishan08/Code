4#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
int main()
{
    int n,i;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    vector<pair<int,int>> c;
     vector<pair<int,int>> :: iterator it;
    for(i=1;i<=n;i++)
      cin>>a[i]>>b[i];
    //for(i=1;i<=n;i++)
      //  cin>>b[i];
    for(i=1;i<=n;i++)
    {
        c.push_back(make_pair(i,a[i]+b[i]));
    }
    sort(c.begin(),c.end(),sortbysec);
    for(auto it: c)
        cout<<it.first<<" ";

}
