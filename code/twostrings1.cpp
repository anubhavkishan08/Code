#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    set<char> st;
    set<char> st1;
    vector<char> a;
    vector<char> b;
    set<char> :: iterator it;
    set<char> :: iterator it1;
    int i,j,c=0;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    for(i=0;i<s1.size();i++)
        st.insert(s1[i]);
     for(i=0;i<s2.size();i++)
        st1.insert(s2[i]);

       for(auto it :st)
             a.push_back(it);

        for(auto it1 :st1)
             b.push_back(it1);

             for(i=0;i<a.size();i++)
             {
                 for(j=0;j<b.size();j++)
                 {
                     if(a[i]==b[j]){
                        c=1;
                       break;}
                 }
             }
             if(c==1)
                cout<<"YES"<<"\n";
             else
                cout<<"NO"<<"\n";
    }
}
