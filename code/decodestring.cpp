#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0,flag=0;
    string s,s1,s2,s3;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(isdigit(s[i]))
        s1+=s[i];
        else if(isalpha(s[i]))
        s2+=s[i];
    }
     i=0;
    while(i<s1.size())
    {
        sum=int(s1[i]-48);
        while(sum--)
        {
            s3+=s2[i];
        }
        i++;
    }
    cout<<s3<<endl;
}
