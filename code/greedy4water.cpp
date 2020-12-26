#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,cap,sum=0,count1=0;
    int arr[10000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>cap;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(i=0;i<n;i++)
        {
            sum=sum+arr[i];
            if(sum<cap)
              count1++;
            else
             break;
        }
        cout<<count1<<endl;
        //count1=0;
    }
}
