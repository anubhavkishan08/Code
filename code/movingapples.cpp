#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,c=0,d=0,sum1=0;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    for(auto it:arr)
        sum+=it;
    sum=sum/arr.size();

    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>sum)
      c+=arr[i]-sum;
    }
    cout<<c;
}
