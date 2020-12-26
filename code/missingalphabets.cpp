#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        char a;
        string e,w;
        vector<string> v;
        cin>>e;
        a=e[0];
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>w;
            v.push_back(w);
        }
        for(i=0;i<v.size();i++)
        {
            if(v[i][i]==a){
                  for(i=0;i<v.size();i++)
                cout<<v[i];}
        }

            for(i=0;i<v.size();i++)
                cout<<v[i];
    }
}

