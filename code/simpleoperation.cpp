#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,t,c=0,d=0;
    string s1,s2;
    cin>>t;
    cin>>s1;
    cin>>s2;
    n=s1.size();
    while(t--){
    for(i=0;i<n;i++)
    {
        if(s1[i]==s2[i])
        {
            c++;
        }
        else
            d++;
    }
    cout<<2*d;
    }
}
