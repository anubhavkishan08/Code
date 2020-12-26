#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,diff=0;
    cin>>a>>b;
    diff=abs(a-b);
    for(i=diff;i>0;i--)
    {
        if(diff%i==0)
        {
            if(a%i==0 && b%i==0)
                break;
        }
    }
    cout<<i;
}
