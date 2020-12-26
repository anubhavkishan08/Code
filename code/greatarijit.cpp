#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
     const unsigned int m =1000000007;
    while(t--)
    {
        int n,i,d=0,sum=0,sum1=0;
        cin>>n;
        vector<int> arr(n);
        for(i=0;i<n;i++)
            cin>>arr[i];

        for(i=0;i<arr.size()-1;i++)
        {
            d=arr[i+1]/arr[i];
        }

       for(i=0;i<d;i++){
        sum=sum+arr[i];
      }
       sum=sum*d;
       for(i=1;i<=sum;i++){
         sum1=sum1+i;
       }

       cout<<sum1%m<<endl;
    }
}
