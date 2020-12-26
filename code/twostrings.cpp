#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,c=0;
    int i=0,j;
    string s1,s2;
    cin>>s1;
     cin>>s2;
     n=s1.size();
    // for(i=0;i<s1.size();i++)
     while(n>0)
  {
         for(j=0;j<s2.size()/2;j++)
         {
             if(s1[i]==s2[j])
                c=1;
         }
         i++;
         n--;
     }
      if(c==1)
        cout<<"yes";
      else
        cout<<"no";
    }
}
