#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,c=0;
    string s;
    cin>>t;
    for(i=0;i<t;i++)
    {
      cin>>s;
    for(int j=0;j<s.length();j++)
    {
        if(s[j]==97 || s[j]==101 || s[j]==105 || s[j]==111 || s[j]==117 || s[j]==65 || s[j]==69 || s[j]==73 || s[j]==79 || s[j]==85)
             c++;
    }
     cout<<c<<endl;
       c=0;
   }
}
