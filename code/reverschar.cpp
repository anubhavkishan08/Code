#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,i,j;
    cin>>n;
    vector<char> a(n);
    for( i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<a.size();i++)
        cout<<a[n-1-i];
    }
}

