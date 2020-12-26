#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<a.size();i++)
    {
        int c=a[i];
        b.push_back(a[c]);
    }
    for(auto it: b)
        cout<<it;

}
