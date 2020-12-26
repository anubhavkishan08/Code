#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,flag=0;
        cin>>n;
        vector<int> arr(n);
        for(i=0;i<n;i++)
            cin>>arr[i];

        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]%2==0){
                flag=0;
               break;}
            else
                flag=1;

        }
        if(flag==1)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
}
