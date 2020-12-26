#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    queue<int> q;
    while(n--)
    {
        cin>>t;
        if(t==1)
        {
          int x;
          cin>>x;
          q.push(x);
        }
        if(t==2)
            q.pop();
        if(t==3)
            cout<<q.front();
    }
}
