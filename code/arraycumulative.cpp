#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,l,r,q;
    cin>>n;
    vector<int> arr(n);
    for(i=0;i<n;i++){
        cin>>arr[i];
      }
      cin>>q;
      while(q--){
    cin>>l>>r;
        arr[l]++;
        if(r+1<n)
        arr[r+1]--;
    }
   /* for(auto it:arr)
    {
        cout<<it<<" ";
    }
    cout<<endl;*/
    for(i=1;i<arr.size();i++)
    {
        arr[i]=arr[i]+arr[i-1];
    }
     for(auto it:arr)
    {
        cout<<it<<" ";
    }
}
