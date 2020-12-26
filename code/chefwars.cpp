#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,h,p;
    cin>>t;
    while(t--)
    {
        cin>>h>>p;
         while(h>0 && p>0)
         {

               h=h-p;
               p=p/2;

             if(h<=0){
            cout<<"1"<<endl;
             break;}
             if(p<=0){
              cout<<"0"<<endl;
            break;
        }
         }
    }
}
