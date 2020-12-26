#include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
    vector<int> v1(n);
    for(int i=0;i<n;i++)
        cin>>v1[i];
while(d>0){
int a= v1.front();
v1.push_back(a);
v1.erase(v1.begin());
d=d-1;
}
for(int j=0;j<v1.size();j++)
cout<<v1[j]<<" ";
}
