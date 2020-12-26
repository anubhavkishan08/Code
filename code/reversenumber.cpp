#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,rem,newnum=0;
    cin>>t;
    while(t--){
    cin>>n;
    while(n!=0)
    {
        rem=n%10;
        newnum=newnum*10+rem;
        n=n/10;
    }
    cout<<newnum<<endl;
     newnum=0;
    }
}
