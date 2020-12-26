#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,i,len,m;
    cin>>n;
    char s[n];
    for(i=0;i<n;i++)
    cin>>s[i];
    for(i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
            len++;
      if(s[i]==s[i+2])
        len++;
        if(s[i]==s[i+1] && s[i]==s[i+2] && s[i]==s[i+3])
            len++;

    }
    m=n+len;
    cout<<m;
}
