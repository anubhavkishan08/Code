#include<bits/stdc++.h>
using namespace std;
vector<long long int> arr;
vector<long long int> arr1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t,n,i,a,b,c=0,d=0,key=0,key1=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<(4*n)-1;i++)
        {
            cin>>a>>b;
            arr.push_back(a);
            arr1.push_back(b);
        }
        sort(arr.begin(),arr.end());
        sort(arr1.begin(),arr1.end());
        for(i=0;i<arr.size();i+=2){
            if(arr[i]!=arr[i+1])
            {
                key=arr[i];
               break;}
            }
         for(i=0;i<arr1.size();i+=2){

             if(arr1[i]!=arr1[i+1]){
                key1=arr1[i];
                 break;}
         }

        cout<<key<<"  "<<key1<<endl;
    }

}

