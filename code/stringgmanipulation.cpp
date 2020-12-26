//program to check numeric,alphanumeric and string.
#include<bits/stdc++.h>
#include <string>
#include <locale>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int i,c=0,d=0;
        cin>>s;
        for(i=0;i<s.size();i++)
        {
             if(isdigit(s[i]))
                d=1;
             if(isalpha(s[i]))
               c=1;
        }
        if(d==1 && c==1)
            cout<<"Its an Alphanumeric"<<"\n";
        else{
        if(d==1)
            cout<<"Valid Format"<<"\n";
        if(c==1)
            cout<<"Its a String"<<"\n";
        }
    }
}
