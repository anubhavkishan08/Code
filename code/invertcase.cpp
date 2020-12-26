#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i;
    string s,s1;
    getline(cin,s);
    cin>>n>>m;
    if(s[n-1]>=65 && s[n-1]<=90)
		s[n-1]=(char)(s[n-1]+32);
	else if(s[n-1]>=97 && s[n-1]<=122)
		s[n-1]=(char)(s[n-1]-32);
	if(s[m-1]>=65 && s[m-1]<=90)
		s[m-1]=(char)(s[m-1]+32);
	else if(s[m-1]>=97 && s[m-1]<=122)
		s[m-1]=(char)(s[m-1]-32);

    cout<<s;

}
