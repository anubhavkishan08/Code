#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0,sum=0,diff,mult=1;
    cin>>n;
    diff=n-mult;
    for(i=1;i<n;i++)
    {
        mult=mult*i;
        sum=sum+mult;
        if(diff==sum)
            break;
        else
            c++;
    }
    cout<<c<<" "<<sum;
}
