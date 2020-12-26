#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j,k,i,sum=0;
    cin>>n>>k>>j;
    vector<int> arr(n);
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
        sum=sum+arr[j-1];
        k--;
        auto it=arr.begin()+j-1;
     //   cout<<*it<<endl;
        arr.erase(it);
       // cout<<arr.size()<<endl;
  sort(arr.begin(),arr.end());
         for(i=0;i<k;i++){
            sum=sum+arr[i];
         }
       // for(i=0;i<arr.size();i++)
       //{
        //cout<<arr[i]<<" ";
       //}
  cout<<sum<<endl;

}
