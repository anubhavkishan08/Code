#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,sum=0,sum1=0,sum2=0,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector<int> arr(n);
        for(i=0;i<n;i++){
            cin>>arr[i];
          }
          vector<int> arr1(arr);

       for(i=0;i<arr.size();i++)
       {
          // cout<<arr[i]<<" ";
           sum=sum+arr[i];
       }
            for(i=0;i<arr.size();i++)
        {
            if(arr[i]>=k)
                arr1[i]=k;
        }
        for(i=0;i<arr1.size();i++)
       {
          // cout<<arr[i]<<" ";
           sum1=sum1+arr1[i];
       }


        sum2=sum-sum1;
        cout<<sum2;
    }
}
