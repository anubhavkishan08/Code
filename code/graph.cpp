#include<bits/stdc++.h>
using namespace std;
set<int> nodes;
int largestFactor(int x)
{
  int sq=sqrt(x);
  int ans=1;
  for(int i=2;i<=sq;i++)
  {
    if(x%i==0){
      int t=x/i;
      if(i>t)
        return i;
      else
        return t;
    }
  }
  return ans;
}
int main()
{
  int n,m;
  cin>>n>>m;
  if(n==m){
    cout<<"1"<<endl;
    }
  if(n < m)
    swap(n,m);
    nodes.insert(n);
  int n1=n;
  int ans=-1;
  while(1)
  {
    int l=largestFactor(n1);
      if(l==m)
      {
        ans=nodes.size();
        break;
      }
    if(l==1)
      break;
    nodes.insert(l);
    n1=l;
  }
  if(ans == -1)
    n1=m;
  nodes.insert(n1);
  while(1)
  {
    int l=largestFactor(n1);
    if(l==1)
      break;
    nodes.insert(l);
    n1=l;
  }

if(ans == -1)
{
  ans=nodes.size();
}
cout<<ans<<endl;

return 0;
}


