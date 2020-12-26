#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a,c=0;
    int flag=0;
        cin>>n;
    vector<int> nums(n);
    for(i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    for(i=0;i<n;i++)
    {
        a=nums[i]+1;
        for(j=0;j<n;j++)
        {
          if(nums[j]==a)
          {
             c++;
             break;
          }
        else
           flag=0;
    }
   }
       cout<<c;

}

