#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,k,l;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<vector<int>> ar1;
        vector<int> arr(n);
        vector<int> vec;
        vector<int> vec1;
        for(i=0;i<(n*n);i++)
        {
            if((i+1)%2==0)
           vec.push_back(i+1);
           else
            vec1.push_back(i+1);
        }
        k=0,l=0;
        for(i=0;i<n;i++){
         for(j=0;j<n;j++){
                if((i+j)%2==0){
           arr.push_back(vec[k]);
           k++;
        }
           else{
            arr.push_back(vec1[l]);
            l++;
           }
      }
      ar1.push_back(arr);
    }
        for(i=0;i<ar1.size();i++)
        {
            for(j=0;j<ar1[i].size();j++)
            {
                cout<<ar1[i][j]<<" ";
            }
                cout<<endl;
        }
    }
}

