#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 int t,m,n,sum=0,total=0,mex=0,i;
 cin>>t;
 while(t--)
 {
     cin>>n>>m;
     vector<int> a(n);
     for(i=0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end());
      total =((n+1)*(n+2))/2;
     for(i=0;i<a.size();i++)
     {
         sum=sum+a[i];
     }
     int mex= total-sum;

     if(mex==m)
        cout<<m<<endl;
     else
        cout<<"-1"<<endl;
 }
}
