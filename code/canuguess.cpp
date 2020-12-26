#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,sum=0,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
      for(i=1;i<n;i++){
         sum=sum+i;
     }
         cout<<sum<<"\n";
    }
}
