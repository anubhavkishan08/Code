#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,c=0,a1,b,n;
    vector<int> arr;
    cin>>n>>b;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
            arr.push_back(i);
    }
    for(i=0;i<arr.size();i++)
    {
        a1=arr[arr.size()-1-i];
      c=__gcd(a1,b);
      if(c==1)
       break;
       else
        a1=1;
    }
    cout<<a1;
   // for( auto it: arr1){
     //   cout<<it<<" ";
    //}
}
