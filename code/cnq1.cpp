#include<bits/stdc++.h>
using namespace std;
int getCount(vector<int> arr, int n, int k){

   int c = 0;
   for(int i=0; i<n; i++){
       int j = i + 1;
      while(j < n and arr[j] - arr[i] <= k) {
   c += 1;
   j++;
}
   }
   return n + c;
}
int main()
{
    int n,i,j,k,c=0;
    cin>>n;
    vector<int> arr(n);
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>k;
    sort(arr.begin(),arr.end());
    cout<<getCount(arr,n,k);
}

