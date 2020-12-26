#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
int i,c=0;
string s1;
for(i=0;i<s.size();i++)
 {
   int a=s[i];
   if(a>=65 && a<=90 )
   //if(isupper(a))
     c++;
 }
  cout<<c+1;
}
