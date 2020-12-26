#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k,cost=0,c=0;
    cin>>n>>k;
    vector<int> a(n);
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end(),greater<int>());

    for(i=0;i<n;i++){
          cost += a[i] * (c / k + 1);
        c++;
    }
     cout<<cost;
}
