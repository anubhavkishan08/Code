#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=0,i,p,c=0;
    cin>>n;
    cin>>p;
    string s;
    cin>>s;
    vector<int> b(n);
    for(i=0;i<n;i++)
        b[i]=int(s);
    for(i=0;i<n;i++)
        cout<<b[i];
       /* while(p--){
    for(i=0;i<n;i++)
    {
        if(s[i]==0)
            break;
    }
     s[i]=1;
}
    for(i=0;i<n;i++)
    {
        cout<<s[i];
       // c=c+s[i];
    }
    int a=0;
    a=n-c;
    //cout<<a;
    */
}
