#include<bits/stdc++.h>
using namespace std;
int c=0;
int flag=0;
vector<pair<int,string>> mp;
void result(string s, int k)
{
    // set to store the strings
    vector<string> st;

    for (int i = 0; i < (int)s.size(); i++) {

        string ans = "";
        for (int j = i; j < (int)s.size(); j++) {

            ans += s[j];
            if (ans.size() == k) {
                for(int i=0;i<ans.size();i++)
                {
                    if(ans[i]=='a' || ans[i]=='e' || ans[i]=='i' | ans[i]=='o' || ans[i]=='u'){
                         c++;
                          flag=0;}
                    else{
                         flag=1;
                         }
                }
                mp.emplace_back(c,ans);
                c=0;
                break;
            }
        }
    }
int a=0;
    if(flag==0){
    for (auto it : mp){
            a=it.first;
            if(a>it.first)
                a=it.first;
    }
    for(auto it: mp)
    {
        if(it.first==a)
            cout<<it.second;
    }
}
      if(flag==1)
                    cout<<"NOT FOUND"<<endl;
}
int main()
{
 string s;
 int k;
 cin>>s>>k;
 result(s,k);
}
