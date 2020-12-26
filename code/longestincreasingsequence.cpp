//LONGEST INCREASING SEQUENCE DP-3
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
        cin>>n;
    vector<int> a(n);
      vector<int> :: iterator it;
    vector<int> lis(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
        lis[0]=1;
    for(int i=1;i<n;i++)
    {
        lis[i]=1;
        for(int j=0;j<i;j++)
        {
            if(a[i]>a[j] && lis[i]<lis[j]+1)
                lis[i]=lis[j]+1;
        }
    }
      it =max_element(lis.begin(),lis.end());
      cout<<*it;

}
