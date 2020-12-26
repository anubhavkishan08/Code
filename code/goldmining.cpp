#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float n,g,a,b,ans1=0,ans2=0,div=0,sum=0;
        cin>>n;
        while(n--)
        {
            cin>>g>>a>>b;
            sum=sum+g;
            div=sum/(a+b);
                ans1=div*a;
                ans2=div*b;
        }
        cout<< fixed<<setprecision(5)<<sum-ans1<<"  "<<setprecision(5)<<sum-ans2<<endl;;
    }
}
