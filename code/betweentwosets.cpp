#include<bits/stdc++.h>
#include<iostream>
#include <vector>
using namespace std;
int main()
{
    int m,n,e;
    int c=0,flag=0;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    vector<int> d(100);
    for(int i=0;i<n;i++){
       cin>>a[i];
    }
     for(int j=0;j<m;j++){
        cin>>b[j];
     }
    for(int i=0;i<a.size();i++){
       e=a[i+1];
     //  cout<<e<<endl;
       break;
  }
            for(int i=1;i<=10;i++){
            d[i]=e*i;
       //     cout<<d[i]<<" ";
            }
 for(int j=0;j<10;j++){
    for(int i=1;i<d.size();i++){
        if(b[j]%d[i]==0)
            c=c+1;
    }
     cout<<c;
 }

}


