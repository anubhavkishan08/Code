#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,sum=0,diff=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> arr(n);
        for(i=0;i<n;i++)
            cin>>arr[i];
        for(i=0;i<arr.size()-1;i++)
        {
            diff=abs(arr[i+1]-arr[i])-1;
            sum=sum+diff;
        }
        cout<<sum;
    }
}
