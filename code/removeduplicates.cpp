#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k=0;
    string str;
    vector<char> str1;
    cin>>str;
    for(i=0;i<str.size();i++)
    {
        int j;
        for(j=0;j<i;j++)
           if(str[i]==str[j])
              break;

        if(i==j)
           str1.push_back(str[i]);
    }
    for(i=0;i<str1.size();i++)
        cout<<str1[i];
}
