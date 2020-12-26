#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s,s1;
     cin>>s;
        int i,j=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u')
                s1=s1+s[i];
        }
       reverse(s1.begin(),s1.end());
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u'){
                s[i]=s1[j++];
                }
        }
        cout<<s;
}
