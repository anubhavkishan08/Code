#include<iostream>
using namespace std;
int main()
{
int n,i,j;
cin>>n;
for(j=n;j>=1;j--)
{
    for(i=n-j+1;i<=n;i++)
    {

        cout<<i;
    }
    cout<<"\n";
}
}

