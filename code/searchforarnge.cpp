#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,B,flag=1;
    cin>>n;
    vector<int> arr(n);
    vector<int> arr1(2,-1);
//    int a=2;
  //  vector<int> arr2 ;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>B;
    for(i=0;i<arr.size();i++)
    {
        if(arr[i]==B){
          //  cout<<i;
            arr1.clear();
           arr1.push_back(i);
                 //flag=0;
                 }
         // if(arr[i]!=B)
       //         flag=1;
    }
         for(auto it : arr1)
        cout<<it;



}
