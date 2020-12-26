#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n ,i,j,c=0;
	string s,s1;
	cin>>s;
	n=s.size();
	for(i=0;i<n;i++)
	{
      for(j=0;j<i;j++)
      {
          if(s[i]==s[j])
            break;
      }
       if(j==i)
        s1[c]=s[i];
	}
     cout<<s;
}
