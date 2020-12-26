#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main()
{
    string s;
    cin>>s;
set<string> intset;
for(int i=0;i<s.size();i++)
{
    cout<<intset.insert(const s);
}
set<string> :: iterator itr;
for ( itr = intset.begin(); itr != intset.end(); itr++)
        cout << *itr << " ";

}
