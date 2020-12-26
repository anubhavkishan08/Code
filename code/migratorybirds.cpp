#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    int i,c=0,j;
    cin>>n;
    vector<int> arr(n);
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<5;j++)
        {
          if(arr[i]==arr[j]){
              c=arr[j];
          }
        }
    }
        cout<<c;
}
