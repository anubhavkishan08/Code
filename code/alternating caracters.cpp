#include<bits/stdc++.h>
using namespace std;


int main()
{
    int i,n,c=0,t;
     string s;
     cin>>t;
     while(t--){
     cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]==s[i+1])
             c++;
    }
  //  cout<<c<<endl;
    c=0;

    if(c%2==0)
        cout<<"YES"<<"\n";
    else
         cout<<"NO";
}
}
