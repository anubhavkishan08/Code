#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0;
    int interval,r1,r2;
    cin>>n;
     string str;
    for(i=0;i<n;i++)
        cin>>str[i];
        char s[n];
        strcpy(s,str.c_str());
      for(i=0;i<n;i++)
        {
            if(s[i]>=65 && s[i]<=90)
            s[i]=s[i]+32;
        }
      //  for(i=0;i<n;i++)
        //    cout<<s[i];

    char a='a' ;
    cin>>interval;
    while(interval--){
    cin>>r1>>r2;
    for(i=r1;i<=r2;i++)
    {
        if(a<s[i]){
            a=s[i];
        }
    }
    for(i=r1;i<=r2;i++){
      if(a==s[i])
          c++;
    }
    cout<<c<<"\n";
     c=0;
    a='a';
    }
}

