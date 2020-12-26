#include<bits/stdc++.h>
using namespace std;
 int maxProduct(vector<int>& nums) {
     vector<int> v;
        int b=0,c=0,i;
        if(nums.size()==0) return -1;
        for( i=0;i<nums.size()-1;i++)
        {
             b=nums[i]*nums[i+1];
             v.push_back(b);
        }
               c=*max_element(v.begin(),v.end());
        return c;
    }
    int main()
    {
        int n,i;
        cin>>n;
        vector<int> arr(n);
        for(i=0;i<n;i++)
            cin>>arr[i];

      cout<<maxProduct(arr);
    }
