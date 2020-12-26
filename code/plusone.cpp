#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,r;
    cin>>n;
    vector<int> a(n);
    vector<int> b;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        a[n-1-i]=a[n-1-i]+1;
    }
      if(a.size()==1)
    {
        for(i=0;i<a.size();i++)
     {
         if(a[i]>0){
           k=a[i]/10;
           j=a[i]%10;
           b.push_back(k);
           b.push_back(j);
         }
      }
     }
    for(i=0;i<a.size();i++)
        cout<<a[i];
}
