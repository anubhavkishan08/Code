#include<bits/stdc++.h>
 #include <limits.h>
using namespace std;
int main()
{
    int t,count1=0;
    cin>>t;
    while(t--)
    {
        int n;
         cin>>n;
        while(n>0)
        {

            n=n/5;
            count1=count1+n;
        }
        cout<<count1<<"\n";
    }

}

