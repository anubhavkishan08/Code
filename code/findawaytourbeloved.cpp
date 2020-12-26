#include<bits/stdc++.h>
using namespace std;
vector<int> arr;
int main()
{
    int a,b,i,j,sum=0,sum1=0,ans=INT_MAX,ans1=INT_MAX;
    cin>>a>>b;
    int arr[a+1][b+1];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            sum=sum+arr[i][j];
        }
        ans=min(sum,ans);
    }

     for(i=0;i<a;i++)
     {
         for(j=0;j<b;j++)
         {
             sum1=sum1+arr[j][i];
         }
         ans1=min(sum1,ans1);
     }
cout<<min(ans,ans1);

}
