#include<bits/stdc++.h>
using namespace std;
int fun(int arr[],int n){
    int dp[n];
int ans=0;
    for(int i=0;i<n;i++)
        dp[i]=0;
    dp[0]=arr[0];
     ans=max(0,arr[0]);
    for(int i=1;i<n;i++){
        dp[i]=max(dp[i-1]+arr[i],arr[i]);
        ans=max(ans,dp[i]);
    }
    return ans;
}
int main()
{
    int arr[]={1, -2,3,4,5,6};
   // a=2;
    //b=10;
    cout<<fun(arr,6);
}
