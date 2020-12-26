#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
     map<char,int> mp;
        char c;int a=-1;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
       for(int i=0;i<s.size();i++)
        {
            if(mp[s[i]]==1){
                  a=i;
                break;}
        }
        cout<< a;
}
