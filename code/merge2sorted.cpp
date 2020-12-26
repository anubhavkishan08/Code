#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,gap=0;
    cin>>n>>m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    for(i=0;i<n;i++)
        cin>>arr1[i];
    for(i=0;i<m;i++)
        cin>>arr2[i];
   sort(arr1.begin(),arr1.end());
   sort(arr2.begin(),arr2.end());
    vector<int> arr3(arr1);
    for(i=0;i<m;i++)
    {
       arr3.push_back(arr2[i]);
    }
    while(gap>1){
     gap=(m+n)/2;
    for(i=0;i<arr3.size();i++)
    {
        if(arr3[i]<arr3[i+gap])
            swap(arr3[i],arr3[i+gap]);
    }
}
    for(auto it: arr3)
        cout<<it<<" ";
}
