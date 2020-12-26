#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0' || s[i]=='1')
            c=1;
        else{
            c=0;
            break;}
    }
    if(c==1)
        cout<<"yes";
    else
        cout<<"no";
}
