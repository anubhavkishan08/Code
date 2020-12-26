#include<bits/stdc++.h>
using namespace std;
int power_fn(long long int no,long long int power,long long int c,long long int m)
{
   long long int ans=1;
    while(power>0){
    if(power%2==1)
        ans=(ans*no);
       no=(no*no);
       power=power/2;
    }
    return (ans);
}
int main()
{
    long long int n,p,m,c;
    cin>>n;
    cin>>p;
    cin>>c;
    cin>>m;
    cout<<power_fn(n,p,c,m);
}
