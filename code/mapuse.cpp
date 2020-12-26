#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
   map<int,int> m;
   vector<int> arr(n);
   for(int i=0;i<n;i++)
       cin>>arr[i];

   for(int i=0;i<n;i++)
   {
       m[arr[i]]++;
   }
   int a=(n/2)+1;
   //cout<<a;
   //cout<<m[a];
   for(auto it: m){
 //   cout<<it.first<<" "<<it.second<<endl;
     if(it.second>=a)
        cout<<it.first<<endl;
   }
}
