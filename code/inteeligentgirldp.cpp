#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,c=0,n,j;
    string s;
    cin>>s;
    n=s.size();
    while(n>0){
    i=0;
    for(j=i;j<s.size();j++)
    {
        if(s[j]%2==0)
            c++;
        i++;
    }
       //cout<<c<<" ";
       c=0;
       n=n-1;
       cout<<i;
    }
}
