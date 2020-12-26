#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<char>st;
     set<char>::iterator it;
      string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
            st.insert(s[i]);
    for(auto it:st)
        cout<<it;

}
