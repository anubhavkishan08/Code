#include<bits/stdc++.h>
using namespace std;
int maximumProduct(vector<int>& nums) {
       //There are two cases 
       //max multiplication of 3 numbers can be achived 
       //when 3 max +ve numbers are multiplied ,or
       //when 2 most -ve numbers and 1 max +ve number is multiplied
        sort(nums.begin(),nums.end());
        int n=nums.size();
       
        int mul1 = nums[n-3]*nums[n-2]*nums[n-1];
        int mul2 = nums[0]*nums[1]*nums[n-1];
        
        if(mul1>mul2)
            return mul1;
        return mul2;
    }
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
      cin>>arr[i];
    
    cout<<maximumProduct(arr);
}