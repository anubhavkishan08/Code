#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i;
    cin>>n>>k;
    vector<int> arr;
    for(i=1;i<=10;i++)
    {
        arr.push_back(i);
    }
    do{
        if(arr.size()==4)
            cout<<arr[i]<<" ";
    }while(next_permutation(arr.begin(),arr.end()));
}
