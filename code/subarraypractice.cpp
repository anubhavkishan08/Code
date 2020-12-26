#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i;
    cin>>n>>x;
    vector<int> a(n);
    vector<int> b;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>=x && b.size()<=x)
            b.push_back(a[i]);
    }
        cout<<b.size();
}
