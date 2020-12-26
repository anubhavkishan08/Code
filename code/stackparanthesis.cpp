#include<bits/stdc++.h>
using namespace std;
bool matching(char a, char b)
{
    if((a=='{' && b=='}') ||(a=='(' && b==')') ||(a=='[' && b==']'))
        return true;
    else
    return false;
}
int main()
{
    string s;
    stack<char> st;
    int flag=0;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='{' || s[i]=='[' || s[i]=='(')
            st.push(s[i]);
         else
         {
             if(st.empty()==true)
                 //cout<<"false";
                 flag=1;
             else if(matching(st.top(),s[i])==false)
                 flag=1;
             else
                st.pop();
         }
    }
      if(st.empty()==true && flag==0)
        cout<<"true";
      else
        cout<<"false";
}
