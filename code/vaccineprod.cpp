#include <bits/stdc++.h>
using namespace std;
int main()
{
    int d1,d2,v1,v2,p,ans=0,c=0;
    cin>>d1>>v1>>d2>>v2>>p;
        if(d1>d2)
        {
            for(int i=d2;i<d1;i++){
             ans+=v2;
             }
             c=d1-1;
        }
        else
        {
            for(int i=d1;i<d2;i++){
             ans+=v1;
             }
             c=d2-1;
        }
      //  cout<<p<<endl;
       // cout<<ans<<endl;
        while(ans<p)
        {
            ans+=v1+v2;
            c++;
        }
        cout<<ans<<endl;
        cout<<c<<endl;
}