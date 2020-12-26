#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,t;
    string s;
    cin>>s;
    cin>>n>>m;
        sort(s.begin()+n,s.begin()+m,greater<string> s);
    for(i=0;i<=s.size();i++)
        cout<<s[i];
}
