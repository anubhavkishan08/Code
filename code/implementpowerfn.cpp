#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,b;
    cin>>n;
    int a[n+1][n+1];
    vector<int> num;
    vector<int> v1;
    vector<vector<int> > vec;
    for(i=1;i<=n*n;i++)
        num.push_back(i);
    for(i=0;i<num.size();i++)
    {
        b=num[i];
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                v1.push_back(b);
            }
            vec.push_back(v1);
        }

    }
    for(i=0;i<vec.size();i++)
    {
        for(j=0;j<vec[i].size();i++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }

}
