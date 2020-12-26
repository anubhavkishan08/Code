#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}
int main()
{
    int n,c=0,i,j;
    cin>>n;
    vector<pair<int,int>> arr;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c=i+j;
           if (isprime(c))
               arr.emplace_back(i,j);
        }
    }
    for(auto it1: arr)
        cout<<it1.first<<it1.second<<" ";
    cout<<arr.size();
}
