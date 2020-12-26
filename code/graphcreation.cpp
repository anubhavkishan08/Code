#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,n1,a,b,ele,c=0;
    cin>>n;
    vector<vector<int>> graph(n);
    vector<vector<int>> graph1(n);
    n1=n-1;
    while(n1--)
    {
        cin>>a>>b;
        graph[a].push_back(b);
        //  graph[b].push_back(a);
    }
    vector<int> arr;
    for(int i=0;i<graph.size();i++)
    {
        for(int j=0;j<graph[i].size();j++)
        {
           cout<<graph[i][j]<<" ";
           c++;
        }
       
        arr.push_back(c);
        c=0;
         cout<<endl;
    }
    for(auto it: arr)
    {
        cout<<it<<" ";
    }
    set<int> finalGraph;int ct=0;
   for(int i=graph.size()-1;i>0;i--)
   {
       for(int j=0;j<graph[i].size();j++)
       {
            ele=graph[i][j];
           finalGraph.insert(ele);ct++;
       }
   }
   for(int z=ele;z<graph[ele].size();z++)
   {
       finalGraph.insert(graph[ele][z]);
   }
   if(finalGraph.size()==n)
      cout<<ct<<" ";
}