#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,flag=0;
    cin>>t;
    while(t--){
    int n,i,j,k,sum=0;
    vector<int> a;
     vector<int> b;
    int totalwork=120;
    for(i=0;i<5;i++){
        cin>>n;
     a.push_back(n);
    }
    cin>>k;
    for(i=0;i<a.size();i++)
    {
        b.push_back(k*a[i]);
    }
    for(i=0;i<b.size();i++)
    {
        sum=sum+b[i];
    }

        if(sum>totalwork)
            flag=1;
        else
            flag=0;

        if(flag==1)
            cout<<"Yes"<<"\n";
        else
            cout<<"No"<<"\n";
  }
}
