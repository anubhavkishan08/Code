#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k,sum1=0,sum2=0;
    cin>>n>>k;
    vector<int> nums(n);
        vector<int> arr(n);
    for(i=0;i<n;i++)
        cin>>nums[i];
         for(int i=0;i<n;i++)
        {
            arr[i]=nums[((i+k)%n)];
        }
        copy(arr.begin(), arr.end(), nums.begin());//copy one array to another
        for(auto it: nums)
            cout<<it<<" ";
}
