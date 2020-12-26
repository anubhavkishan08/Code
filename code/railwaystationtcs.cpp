#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,i,j,p,r=1,n;
    vector<int> arr;
    vector<int> arr1;
    cin>>t;
    n=t;
    while(t--)
    {
        cin>>a>>b;
        arr.push_back(a);
        int sum=a+b;
        arr1.push_back(sum);
        sort(arr.begin(),arr.end());
        sort(arr1.begin(),arr1.end());
        i=1;j=0,p=1;
        while(i<n)
        {
            if(arr[i]<=arr1[j]){
                p++;
                i++;}
            else if(arr[i]>arr1[j]){
                p--;
                j++;}
        }
    }

     cout<<p;
}
