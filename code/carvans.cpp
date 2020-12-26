#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   long long int t,count1=1,a;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        a=arr[0];
        for(int i=0;i<arr.size()-1;i++)
        {
            if(a>arr[i+1]){
               a=arr[i+1];
              count1++;
              }
        }
        cout<<count1<<endl;
        count1=1;
    }
}
