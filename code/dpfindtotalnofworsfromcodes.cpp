#include<bits/stdc++.h>
using namespace std;
//using recursion
/*
int findcodes(vector<int> arr, int n)
{
    if(n==0 || n==1)
        return 1;
    int output=findcodes(arr, n-1);
    if((arr[n-2]*10)+arr[n-1]<=26)
    output+=findcodes(arr, n-2);

    return output;
}
*/
//using dp
/*
int findcodes(vector<int> arr, int n)
{
    vector<int> arr1(n+1);
    if(n==0 || n==1)
        return 1;
        if(arr1[n]>0)
            return arr1[n];
    int output=findcodes(arr, n-1);
    if((arr[n-2]*10)+arr[n-1]<=26)
    output+=findcodes(arr, n-2);

    arr1[n]=output;
    return output;
}
*/
//iterative soln
int findcodes(vector<int> arr,int n)
{
    vector<int> result(n+1);
    result[0]=1;
    result[1]=1;

    for(int i=2;i<=n;i++)
    {
        result[i]=result[i-1];
        if(arr[i-2]*10 + arr[i-1]<=26)
            result[i]+=result[i-2];
    }
    int ans=result[n];
     return ans;
}
int main()
{
 int n;
 cin>>n;
 vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<findcodes(arr,n);
}
