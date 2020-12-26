#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s,s1;
     cin>>s;
     int i,j,k=0;
     i=0,j=s.size();
     while(i<j)
     {
        if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='O' || s[i]=='I' || s[i]=='U'){
                s1=s1+s[i];
                i++;
            }
            else
                i++;
     }
       reverse(s1.begin(),s1.end());
      for(i=0;i<s.size();i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u'|| s[i]=='A' || s[i]=='E' || s[i]=='O' || s[i]=='I' || s[i]=='U'){
                 s[i]=s1[k++];
                }
        }
        cout<<s;
}
