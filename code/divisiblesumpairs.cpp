#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,c=0;
    int sum=0,temp=0;
    cin>>n;
    cin>>k;
    vector<int> a(n);
    for( i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++){
            sum=a[i]+a[j];
           // cout<<sum<<" ";
            if(sum%k==0)
                c++;
        }
        sum=0;
    }
      cout<<c;
}
