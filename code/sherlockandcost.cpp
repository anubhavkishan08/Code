#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n,i,j,diff=0,sum=0;
    cin>>t;
    while(t--){
        cin>>n;
       vector<int> a(n);
       vector<int> b;
       for(i=0;i<n;i++)
          cin>>a[i];
        for(i=0;i<n-1;i++){
               diff=abs(a[i]-a[i+1]);
               b.push_back(diff);
        }
         sort(b.begin(),b.end());
     //    for(i=0;i<b.size();i++)
       //     cout<<b[i];
       for(i=0;i<b.size();i++)
        {
                  sum=sum+b[i];
        }
        cout<<sum;
  }
}
