#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    multimap<int, string, greater <int> > mp;
   multimap<int,string> :: iterator it;
    cin>>t;
    while(t--)
    {
        string s;
        int n;

        cin>>s>>n;
        mp.insert(make_pair(n,s));
    }
     for(auto it : mp)
        cout<<it.second<<" "<<it.first<<"\n";

}
