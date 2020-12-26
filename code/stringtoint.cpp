//Alphabet to integer
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int a=0;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
      a=a*26;
      a=a+int(s[i])-65+1;
    }
    cout<<a;

}
