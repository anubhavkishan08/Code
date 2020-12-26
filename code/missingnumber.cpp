#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,ans=0;
    cin>>n;
    vector<int> arr(n);
    for(i=0;i<n;i++)
        cin>>arr[i];

        sort(arr.begin(),arr.end());
    for(i=0;i<arr.size();i++)
        {
            ans=ans^arr[i];
        }
        cout<< ans;
}
