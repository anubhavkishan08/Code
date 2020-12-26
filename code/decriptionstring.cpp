#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0,flag=0;
    string s,s1;
    cin>>s;
    cin>>n;
    for(i=0;i<s.size();i++)
    {
        if(isdigit(s[i]))
            sum+=int((s[i])-48);
            if(n<=sum){
                flag=1;
                break;}
            else
                flag=0;

    }
    if(flag==1)
    {
    if(isdigit(s[i]))
     cout<<s[i-1];
    else
     cout<<s[i];
    }
    else
        cout<<"-1";


}
