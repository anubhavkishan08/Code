#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,z;
    cin>>t;
    vector<int> arr(t);
    for(i=0;i<t;i++)
    {
        cin>>arr[i];
    }
    cin>>z;
    sort(arr.begin(),arr.end());
    cout<<arr[z-1]<<endl;
}
