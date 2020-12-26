#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j=0,c=0;
    int max1=0;
    map<char,int> mp;
    map<char,int> :: iterator it;
    cin>>t;
    while(t--)
    {

        string s;
        char a;
        cin>>s;
        a=s[j];
        for(i=0;i<s.size();i++)
        {
            if(a==s[i])
                c++;
            mp.insert(pair<char, int>(s[i], c));
        }
        j++;
    }
     for(auto it : mp){
          cout<<it.first<<" "<<it.second<<"\n";
          if(max1<it.second)
            max1=it.second;}
          cout<<max1;
}
