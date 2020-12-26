#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k,n,i,c=0;
    cin>>t>>k;
    for(i=0;i<t;i++){
        cin>>n;
    if(n%k==0)
        c++;
    }
    cout<<c;
}
