#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,b,q,c=1;
   cin>>n;
   unordered_set<int> arr;
 unordered_set<int > :: iterator it;
    vector<int> arr1;
   for(i=0;i<n;i++){
        cin>>b;
        arr.insert(b);
   }
   for (it = arr.begin(); it != arr.end(); ++it)
   {
       arr1.push_back(*it);
   }
  // for(auto it: arr1)
    //  cout<<it<<endl;
   cin>>q;
   while(q--)
   {
       cin>>a;
        for(i=a+2;i<arr1.size();i++)
        {
            if(arr1[a+1]<arr1[i])
                c++;
        }
       cout<<"ans="<<c<<endl;
       c=0;
   }

}
