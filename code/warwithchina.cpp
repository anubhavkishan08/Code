#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,i,k;
    cin>>n;
    vector<int> arr(n);
    for(i=0;i<n;i++)
    {
        cin>>k;
        if(k<4)
            cout<<k<<endl;
        else{
            d=int(k/4);
           cout<<(k-d)<<endl;}
    }
}
