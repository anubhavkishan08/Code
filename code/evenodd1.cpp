#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,i;
    cin>>n1>>n2;
    vector<int> arr1;
    vector<int> arr2;
    for(i=n1;i<n2;i++)
    {
        if(i%2==0)
            arr1.push_back(i);
        else
            arr2.push_back(i);
    }
    if(arr2.size()%2!=0)
        cout<<arr2.size();
    if(arr1.size()%2==0)
       cout<<arr1.size();
}
