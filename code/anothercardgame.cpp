#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,a,b,e=1,f=1;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        while(a>9 || b>9)
        {
            if(a>9){
            a=a-9;
            e++;}
            if(b>9){
            b=b-9;
            f++;}
        }
        cout<<e<<" "<<f<<endl;
          if(e<f)
            cout<<"0"<<" "<<e<<endl;
          else
            cout<<"1"<<" "<<f<<endl;
        e=1;f=1;
    }
}
