#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,r,b,e;
    cin>>n;
    cin>>r;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int j,k,l;
    for(j=1;j<n;j++)
   {
       if(a[j]/r==a[j-1] && a[j]*r==a[j+1])
           c++;
   }

    cout<<c;
}
