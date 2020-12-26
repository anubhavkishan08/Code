#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,k;
    vector<int> a(n);
    vector<int> b(m);
    vector<int> c(n+m);
    cin>>n;
    cin>>m;
    for( i=0;i<n;i++)
        cin>>a[i];
    for( i=0;i<m;i++)
        cin>>b[i];
    i=0,j=0,k=0;
  while(i<n && j<m)
  {
      if(a[i] < b[j]){
        c[k]=a[i];
        i++;     k++;
        }
      else{
        c[k]=b[j];
       j++;   k++;
       }
  }
while(i<n)
{
    c[k]=a[i];
    k++;
    i++;
}
while(j<m)
{
    c[k]=b[j];
    k++;
    j++;
}
 for(i=0;i<n+m;i++)
     c.push_back(c[i]);

     for(i=0;i<n+m;i++)
        cout<<c[i];
}
