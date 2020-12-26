#include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int i,j,n,k;
    int c=0;
    int a=0;
    cin>>n;
    vector<int> ar(n);
    for(j=0;j<n;j++)
        cin>>ar[j];
    for(i=0;i<ar.size();i++)
    {
        if(a<=ar[i])
        {
            a=ar[i];
        }
    }
    for(k=0;k<ar.size();k++){
     if(a==ar[k])
      c=c+1;
    }
      cout<<c;
}
