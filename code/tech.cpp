#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,diff=0;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    diff=arr[n-1]-arr[0];
    cout<<diff<<endl;
}