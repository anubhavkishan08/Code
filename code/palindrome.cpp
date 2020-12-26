#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,flag=0;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        n=s.size();
        for(i=0;i<n/2;i++)
        {
            if(s[i]==s[n-1-i])
                 flag=1;
            else{
                flag=0;
                break;
            }
        }
        if(flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
