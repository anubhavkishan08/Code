#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=1,t;
    cin>>t;
    while(t--){
    cin>>n;
    vector<int> arr(n);
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
     for(i=0;i<n;i++)
        {
            if(arr[i+1]-arr[i]==1)
              c++;
            else
               break;
        }
        cout<<c;
        c=1;}
}
