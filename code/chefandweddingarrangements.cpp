#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,k,a,flag=0,c=0,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        set<int> arr;
        vector<int> arr1;
        vector<int> arr2;
         set <int > :: iterator itr;
        for(i=0;i<n;i++)
        {
            cin>>a;
            arr.insert(a);
            arr2.push_back(a);
        }
        sort(arr2.begin(),arr2.end());
        for(auto it: arr)
        {
            arr1.push_back(it);
        }
        for(i=0;i<arr1.size()-1;i++)
        {
            if(arr1[i+1]-arr1[i]==1){
                flag=1;
            break;}
        }
        if(flag==1)
        {
            for(i=0;i<arr2.size();i++)
            {
                for(j=i+1;j<arr2.size();j++)
                {
                    if(arr2[i]==arr2[j])
                        c++;
                }
            }
            cout<<k+c<<endl;
        }
        else{
            cout<<arr1.size()<<endl;
        }
        arr1.clear();
        arr.clear();
        arr2.clear();
        c=0;
    }
}
