//program to find sum of numbers upto n
#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,i;
    cin>>n;
    //long long int dp[n+1];
    vector<long long int> dp(n+1);
    dp[0]=0;
    for(i=1;i<=n;i++)
    {
        dp[i]=dp[i-1]+i;
    }
    cout<<dp[n]<<endl;
}
