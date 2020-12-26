#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i,diff=0,j,c=0;
    cin>>n;
    vector<int> a(n);
    vector<int> b;
    for(i=0;i<n;i++)
        cin>>a[i];
sort(a.begin(),a.end());
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++)
        {
        diff=abs(a[i]-a[j]);
        }
        b.push_back(diff);}
    sort(b.begin(),b.end());
    for(i=0;i<b.size();i++)
    cout<<b[i]<<"\n";

         //cout<<*min_element(b.begin(), b.end());
}

