#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int i,j,c=0,d=0,sum=0;
    cin>>n;
    string s;
    for(i=0;i<n;i++)
      cin>>s[i];

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(s[i]==s[j])
            c++;
        else
            d++;
        }
    }
    cout<<c<<" "<<d;
}
