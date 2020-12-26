#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
       string a;
       vector<string> s;
    for(i=1;i<=2;i++)
    {
        a=to_string(i);
        s.push_back(a);
    }
    do{

        cout<<s[i]<<" ";
    }while(next_permutation(s.begin(),s.end()));
}
