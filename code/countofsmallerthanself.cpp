#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j=0,c=0;
    cin>>n;
    vector<int> arr(n);
    vector<int> arr1;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(j<arr.size())
    {
        for(i=j;i<arr.size();i++)
        {
                 if(arr[j]>arr[i])
                  c++;
                
        }
            arr1.push_back(c);
            c=0;j++;
    }
        for (auto it: arr1)
          cout<<it<<" ";
}