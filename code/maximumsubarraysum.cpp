#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0,maxi;
    cin>>n;
    vector<int> arr(n);
    for(i=0;i<n;i++)
        cin>>arr[i];

    sum=0;
    maxi=INT_MIN;
    for(auto it: arr)
    {
        sum+=it;
        maxi=max(maxi,sum);
        if(sum<0)
            sum=0;
    }
    cout<<maxi;

}
