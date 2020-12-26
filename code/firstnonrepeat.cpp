//print first non repaeat chracter in string
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i;
    cin>>s;
    map<char,int> mp;
    for(i=0;i<s.size();i++)
    {
        mp[s[i]]++;
    }
    for(i=0;i<s.size();i++)
    {
        if( mp[s[i]]==1){
            cout<<s[i]<<endl;
                 break;}
    }
}
