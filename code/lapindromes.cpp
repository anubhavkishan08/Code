#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,s1,s2;
        cin>>s;
        for(int i=0;i<s.size()/2;i++)
        {
            s1+=s[i];
            s2+=s[s.size()-1-i];
        }
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1==s2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        cout<<s1<<" "<<s2<<endl;
    }
}
