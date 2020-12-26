#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,num,a,i;
    vector<int> rem;
    map<int,string> mp;
     mp.insert({10, "A"});mp.insert({11, "B"});mp.insert({12, "C"});mp.insert({13, "D"});mp.insert({14, "E"});mp.insert({15, "F"});mp.insert({16, "G"});
     mp.insert({17, "H"});mp.insert({18, "I"});mp.insert({20, "J"});mp.insert({21, "K"});mp.insert({22, "L"});mp.insert({23, "M"});
     mp.insert({24, "N"});mp.insert({25, "O"});mp.insert({26, "P"});mp.insert({27, "Q"});mp.insert({28, "R"});mp.insert({29, "S"});mp.insert({30, "T"});
     mp.insert({31, "U"});mp.insert({32, "V"});mp.insert({33, "W"});mp.insert({34, "X"});mp.insert({35, "Y"});mp.insert({36, "Z"});
    cin>>n>>num;
    while(num>0)
    {
        a=num%n;
        rem.push_back(a);
        num=num/n;
    }
    for(i=rem.size()-1;i>=0;i--)
    {
        if(rem[i]>9)
        cout<<mp[rem[i]];
        else
            cout<<rem[i];
    }
}
