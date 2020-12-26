#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,ans=0,a;
    cin>>n;
    vector<int> nums(n);
    vector<int> v;
    vector<int> a1;
    for(i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    for(i=0;i<nums.size();i++)
    {
        ans+=nums[i]*pow(10,n-1);
        n--;
    }
    ans=ans+1;
    nums.clear();
    while(ans>0)
    {
        a=ans%10;
        v.push_back(a);
        ans/=10;
    }
   for(i=v.size()-1;i>=0;i--)
   {
       a1.push_back(i);
   }
   for(auto it : a1)
    cout<<it<<" ";
}
