#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,c=0;
    cin>>n;
    vector<int> arr(n);
     vector<int> arr1;
     arr1.push_back(0);
    for(i=0;i<n;i++)
        cin>>arr[i];

    for(i=0;i<arr.size();i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[i]<arr[j]){
                c++;}
            else
                arr1.push_back(0);
        }
    }
    arr1.push_back(c);
            c=0;
    for(auto it: arr1)
        cout<<it<<" ";
}
