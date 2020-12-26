#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0;
    cin>>n;
    vector<int> a(n);
for(i=0;i<n;i++)
{
    cin>>a[i];
}
vector<int> b(a);
sort(a.begin(),a.end());
for(i=0;i<n;i++)
{
  cout<<"elemet of a"<<a[i]<<"\n";
}

}
