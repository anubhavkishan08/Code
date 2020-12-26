#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,flag=1,a;
   cin>>n;
   while(n--)
   {
       string s;
       cin>>s;
       a=s.size();
       for(int i=0;i<a/2;i++)
       {
           if(s[i]!=s[a-1-i])
              flag=0;
       }
        if(flag==0){
            cout<<"NO"<<endl;
            }
        else{
            cout<<"YES"<<endl;
        }
         flag=1;
   }
}
