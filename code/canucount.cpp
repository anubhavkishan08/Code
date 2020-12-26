#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
         long long cunt=0,m=1,l=s.length();
         set<char> ss;
         set<char> :: iterator it;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='a'||s[i]=='i'||s[i]=='o'||s[i]=='e'||s[i]=='u')
            {
                if(ss.find(s[i])==ss.end())
                {ss.insert(s[i]);}
            }
            else if(s[i]=='_')
                {m=m*ss.size();
                   //cout<<ss.size()<<" ";}
        }
    }
        cout<<m<<endl;
    }
 }

