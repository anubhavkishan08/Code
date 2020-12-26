#include<bits/stdc++.h>
using namespace std;
int main()
{
      ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,i,icecream_cost=5,flag=0,change=0,chef_bal=0;
    cin>>t;
    while(t--)
    {
        queue<int> q;
        cin>>n;
        for(i=0;i<n;i++){
         int k;
        cin>>k;
        q.push(k);
        }
        while(!q.empty()){
          if(q.front()==icecream_cost){
        chef_bal=chef_bal+icecream_cost;
         flag=1;}
         else if(q.front()==10 || q.front()==15)
            {
                change=q.front()-icecream_cost;
              if(change==chef_bal){
                chef_bal=chef_bal+q.front()-change;
                flag=1;}
              else{
                flag=0;
                break;
              }
        }
        q.pop();
    }
        if(flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        chef_bal=0;
    }
}
