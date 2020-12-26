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
       for(auto it:mp)
       {
           if(it.second==1){
              cout<<it.first<<endl;
               break;}
       }
     //  cout<<c;
       /* for(int i=0;i<s.size();i++)
        {
            if(s[i]==c){
                a=i;
              break;}
        }
        return a;
        */
}
