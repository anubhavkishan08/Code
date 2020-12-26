#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c[n+1];
    c[1]=1,c[2]=2;
    for(int i=3;i<=n;i++)
    {
        c[i]=c[i-1]+c[i-2];
    }
    cout<<c[n];
}
