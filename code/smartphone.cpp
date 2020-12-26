#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,price,ans=0;
    cin>>t;
    vector<int> arr(t);
    for(int i=0;i<t;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++)
    {
        price=arr[i]*(t-i);
        ans=max(ans,price);
    }
    cout<<ans<<endl;
}
