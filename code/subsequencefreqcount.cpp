#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
 cin>>t;
 while(t--)
 {
     cin>>n;
     vector<int> arr(n);
     for(i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     do{
        for(i=0;i<arr.size();i++)
        cout<<arr[i]<<" ";
           cout<<endl;
     }while(next_permutation(arr.begin(),arr.end()));
 }
}
