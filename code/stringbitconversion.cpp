#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=0,i,p,c=0;
    cin>>n;
    cin>>p;
    char s[1000000];
    for(i=0;i<n;i++)
        cin>>s[i];
        while(p--){
    for(i=0;i<n;i++)
    {
        if(s[i]=='0')
            break;
    }
     s[i]='1';
}
   // for(i=0;i<n;i++)
    //{
      //  cout<<s[i];
    //}
    for(i=0;i<n;i++)
    {
        if(s[i]=='1')
            c++;

    }

    cout<<c;

}
