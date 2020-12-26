#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j;
    while(t--){
    string s,s1,s2;
    s1="";
    s2="";
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        for(j=i+1;j<s.size();j++)
        {
            if(s[i]==s[j]){
                s1+=s[i];
                continue;
            }
        }
    }
    for(i=0;i<s1.size();i++)
        cout<<s1[i];
    }
}

