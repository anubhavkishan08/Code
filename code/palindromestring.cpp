#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,a,b;
    getline(cin,s);
     cout<<s<<endl;
    for(int i=0;i<s.size();i++)
    {
         s[i]=tolower(s[i]);
       // if((s[i]>96 && s[i]<123) || (s[i]>64 && s[i]<91) || (s[i]>=0 && s[i]<10))
         if(isalnum(s[i]))
          a+=s[i];
    }
     cout<<a<<endl;
     /*for(int i=0;i<a.size();i++)
     {
         if(a[i]!=a[a.size()-i+1])
               break;
     }
    */
    for(int i=a.size()-1;i>=0;i--)
    {
        b+=a[i];
    }
    cout<<b<<endl;
    if(a==b)
        cout<<"palindrome";
    else
        cout<<"not pallindrome";
}
