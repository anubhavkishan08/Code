#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    set<int> mp;
  while(n!=1)
    {
        int cur=n;
        int sum=0;
        while(cur!=0)
        {
           sum+=(cur%10)*(cur %10);
           cur/=10;
        }
        if(mp.find(sum)!=mp.end())
        {
            cout<<"false";
        }
         break;
        mp.insert(sum);
        n=sum;
    }
    cout<<"true";
    for(auto it: mp)
        cout<<it<<" ";
}
