#include<bits/stdc++.h>
using namespace std;
int main()
{
   map<int,int> m;
   vector<int> arr;
   for(int i=0;i<7;i++)
      arr.push_back(i+1);

   for(int i=0;i<7;i++)
   {
       m[arr[i]]++;
   }
   for(auto it: m)
    cout<<it.first<<" "<<it.second<<endl;
}
