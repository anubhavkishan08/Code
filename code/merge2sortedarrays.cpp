#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i;
    cin>>n>>m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    for(i=0;i<n;i++)
        cin>>arr1[i];
    for(i=0;i<m;i++)
        cin>>arr2[i];

    vector<int> arr3(arr1);
    for(i=0;i<m;i++)
    {
       arr3.push_back(arr2[i]);
    }
    sort(arr3.begin(),arr3.end());
    arr1.clear();
    arr2.clear();
    for(i=0;i<n;i++)
    {
        arr1.push_back(arr3[i]);
    }
    for(i=0;i<m;i++)
    {
        arr2.push_back(arr3[i+n]);
    }

    for(auto it: arr1)
        cout<<"arr1->"<<it<<" ";

     for(auto it1: arr2)
        cout<<"arr2->"<<it1<<" ";

}
