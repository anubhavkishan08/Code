#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,sum=0,i;
    cin>>n>>k;
    vector<int> arr(n);
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(k--){
        sort(arr.begin(),arr.end());
        arr[n-1]=floor(arr[n-1]/2);
    }
    for(auto it: arr)
    {
        sum+=it;
    }
    cout<<sum;
}
