#include<bits/stdc++.h>
using namespace std;
void reduceFraction(int x, int y)
{
    int d;
    d = __gcd(x, y);

    x = x / d;
    y = y / d;

    cout << "x = " << x << ", y = " << y << endl;
}
int main()
{
     int t,a,b,c;
    float prob,ans=0;
    float  mod= 1000000007;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        prob=c/b;
        //reduceFraction(c,b);
       // cout<<prob<<" ";

       ans=prob*mod;
     //  ans=int(ans);
         cout<<fixed<<setprecision(6)<<int(ans+1)<<endl;
    }

}
