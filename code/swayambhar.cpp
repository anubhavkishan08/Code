#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0;
    cin>>n;
    string a,b,s="";
        cin>>a;
        cin>>b;
      //  sort(a.begin(),a.end());
        //sort(b.begin(),b.end());
    for(i=0;i<a.length();i++)
    {
        for(i=0;i<=b.length();i++)
        {
          if(a[i]==b[i])
               s=s+a[i];
        }
    }
    cout<<s<<endl;

}
