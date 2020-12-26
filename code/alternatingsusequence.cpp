#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,k,diff=0,a;
    cin>>t;
    while(t--)
    {
    cin>>n>>k;
    vector<int> arr(n);
    vector<int> arr2;
    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr.begin(),arr.end());
    i=0;
    while(k--)
    {
        arr2.push_back(arr[i]);
        i++;
    }
    if(k>1){
    a=INT_MAX;
     for(i=0;i<arr2.size()-1;i++)
     {
         diff=arr2[i+1]-arr[i];
     }
     cout<<diff<<endl;
    }
    else{
        a=0;
        cout<<a<<endl;}
  }
}
