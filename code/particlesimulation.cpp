#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,diff=0,flag=0;
    cin>>n;
    vector<int> a(n);
    vector<int> b;
    vector<int> :: iterator it;
    for(i=0;i<n;i++)
      cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            diff=abs(a[i]-a[j]);
            b.push_back(diff);
        }
    }
       sort(b.begin(),b.end());
       for(i=0;i<b.size();i++)
       {
           if(b[i]==b[i+1])
             flag=1;
       }
        if(flag==1)
        cout<<"0";
         else{
            it=min_element(b.begin(),b.end());
             cout<<*it;
         }

}

