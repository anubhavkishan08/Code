#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   long long int t,i,c=0,d=0,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n=s.size();
        for(i=0;i<n;i++)
        {
            if(s[i]=='x' && s[i+1]=='y'  ||  (s[i]=='y' && s[i+1]=='x')){
                          c++;
                          i++;}
        }
        cout<<c<<endl;
        c=0;
    }
}
