#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    vector<int> cost;
    n=cost.size();
    cost.push_back(1);
    cost.push_back(100);
    cost.push_back(1);
    cost.push_back(1);
    cost.push_back(1);
    cost.push_back(100);
    cost.push_back(1);
    cost.push_back(1);
    cost.push_back(100);
    cost.push_back(1);

     vector<int> dp(n);
        for(i=2;i<n;i++)
        {
            cost[n]=min(cost[n-1],cost[n-2]);
        }
        cout<<cost[n];
}
