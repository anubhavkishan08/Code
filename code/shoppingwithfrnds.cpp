#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    int sum=0;
    int c=0;
    vector<int> p(m);
    cin>>n;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>p[i];
    }
    for(int i=0;i<m;i++)
    {
        sum=sum+p[i];
        if(c<p[i]){
            c=p[i];
        }
          else{
            c=p[i];
          }
    }
       cout<<sum+c;
}

