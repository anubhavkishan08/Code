#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,ans=0,m;
    cin>>n;
     ans=(n%10)*(n%10);
     m=ans%10;
     if(n<0)
         cout<<"Wrong Input"<<endl;
     else{
     if(m==n)
        cout<<"Correct Number"<<endl;
     else
        cout<<"Incorrect Number"<<endl;
     }
}
