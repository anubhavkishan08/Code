#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum1=0,sum2=0;
    cin>>n;
    vector<int> arr(n);
    for(i=0;i<n;i++)
        cin>>arr[i];

   set<int> s;
   for(auto it :arr)
   {
       s.insert(it);
   }
   for(auto it1: s)
   {
       if(it1%2==0)
        sum1+=it1;
       else
        sum2+=it1;
   }
    cout<<sum1<<" "<<sum2;
}
