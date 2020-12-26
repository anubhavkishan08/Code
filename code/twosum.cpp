#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,target;
    int flag=0;
    cin>>n;
    vector<int> nums(n);
    for(i=0;i<n;i++)
    {
        cin>>nums[i];
    }
     cin>>target;
    for( i=0;i<n;i++)
        {
            if (nums[i]+nums[i+1]==target)
                    cout<<i<<" "<<i+1;
        }
}
