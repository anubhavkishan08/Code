#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,target;
    int c=0;
    cin>>n;
    vector<int> nums(n);
    vector<int> num;
    for(i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            for(k=2;k<n;k++)
            {
                if(nums[i]+nums[j]+nums[k]==0){
                    num.push_back(i);
                    num.push_back(j);
                    num.push_back(k);}
            }
        }
    }
    for(i=0;i<n;i++)
    {
             cout<<num[i];
    }
}
