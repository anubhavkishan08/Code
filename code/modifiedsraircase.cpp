#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k;
    cin>>n>>k;
    vector<int> ways(k);
    ways[0]=1;
    for(i=1;i<=n;i++)
    {
       for(j=1;j<k;j++)
       {
           if((i-j)<0)
           {
               continue;
           }
           ways[i%k]+=ways[(i-j)%k];
       }
    }
    cout<<ways[n%k];
}
