#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,num;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++)
    {
        num=arr[i]^arr[i+1];
        if(arr[i]==arr[i+1])
            break;
    }
    cout<<num;
}
