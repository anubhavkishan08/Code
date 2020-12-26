#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,n,a=0,b;
    string s,s1,s2;
    cin>>t;
    while(t--)
    {
    cin>>s;
     n=s.size();
     a=n/2;
     if(n%2==0)
     {
         for(i=0;i<a;i++)
            s1=s[i];
          for(i=a;i<n;i++)
            s2=s[i];
            if(s1==s2)
                cout<<"yes";
            else
                cout<<"no";
     }
     else
     {
         for(i=0;i<a;i++)
            s1[i]=s[i];
         for(i=a+1;i<n;i++)
            s2[i]=s[i];
        // if(s1==s2)
            cout<<s1;
        // else
          cout<<s2;
     }
  }
}
