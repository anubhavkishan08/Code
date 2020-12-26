#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n,d;
    cin>>n;
    vector<float> dist;
    set<float> arr;
    for(int i=0;i<n;i++)
    {
        cin>>d;
        if(d>0)
           // dist.push_back(d);
           arr.insert(d);
    }
    for(auto it:arr)
    {
        dist.push_back(it);
    }
    int c=3;
    int e=dist.size();
    while(c--)
    {
        cout<<dist[e-1]<<" ";
        e--;

    }
}
