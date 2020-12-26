#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,flag=0;
    cin>>n;
    vector<int> a(n);
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(a[i]==a[j])
              flag=1;
       }
   }
     if(flag==1)
        cout<<"yes";
      else
        cout<<"no";
 }
