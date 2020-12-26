#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,n;
   // cin>>t;
    vector<int> a(n);
    vector<int> b;
        cin>>n;
    for( i=0;i<n;i++)
     {
        cin>>a[i];
     }
   for(i=0;i<n;i++){
        b[i]=(a[i]&&a[i+1]);
   }
     for(i=0;i<n;i++)
     {
         cout<<b[i];
     }
}
