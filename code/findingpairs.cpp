#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a,b,t,c=0,d=0;
   long long int m = 1000000007;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n;
        a=a%m;
        b=b%m;
        for(int i=1;i<n;i++)
        {
            c=(b-a)%m;
            d=(b+a)%m;
            a=c;
            b=d;
        }
        cout<<a%m<<" "<<b%m<<endl;
        a=0;
        b=0;
        c=0;d=0;
    }
}

