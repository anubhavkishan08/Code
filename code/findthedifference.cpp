#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
        int i,sum1=0,sum2=0,n1,n2;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    n1=t.size();
    n2=s.size();
        for(i=0;i<max(n1,n2);i++)
        {
           sum1=sum1+(int)t[i];
            sum2=sum2+(int)s[i];
        }
         //for(i=0;i<s.size();i++)
        //{
          // sum2=sum2+(int)s[i];
        //}
        int ans=sum1-sum2;
        char ch=char(ans);//covert ascii to char
        cout<<ch;
}
