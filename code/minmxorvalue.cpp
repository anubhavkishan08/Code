#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a;
    cin>>n;
   vector<int> arr(n);
   vector<int> b;
   for(i=0;i<n;i++)
    cin>>arr[i];
    sort(arr.begin(),arr.end());
  for(i=0;i<n-1;i++)
     {
      a=arr[i]^arr[i+1];
      b.push_back(a);
     }
     auto it= min_element(b.begin(),b.end());
      return *it;
   for(auto it: b)
    cout<<it<<" ";
}
