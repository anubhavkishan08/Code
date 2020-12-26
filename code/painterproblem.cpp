#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a,b,d=0;
    vector<int> c(n);
    vector<int> arr;
    for(i=0;i<n;i++)
    {
        cin>>c[i];
    }
    cin>>a>>b;
    if(c.size()<=a)
    {
        for(i=0;i<c.size();i++)
        {
             d=b*c[i];
            arr.push_back(d);
        }
    }
     b= *max_element(arr.begin(),arr.end());
   cout<<b;
}
