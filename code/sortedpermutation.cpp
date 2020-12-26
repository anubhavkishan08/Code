#include<bits/stdc++.h>
using namespace std;
vector<pair<int,string>> v;
int i=1;
void permute(string str)
{
    // Sort the string in lexicographically
    // ascennding order
    sort(str.begin(), str.end());

    // Keep printing next permutation while there
    // is next permutation
    do {
            v.emplace_back(i,str);
            i++;
    } while (next_permutation(str.begin(), str.end()));
}
int main()
{
    string str,a;
    cin>>str;
    a=str;
    sort(a.begin(),a.end());
     permute(str);
     for(auto it: v){
            if(it.second==a)
        cout<<it.first<<endl;
     }

}
