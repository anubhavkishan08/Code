#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
     float a= floor(log10(n) /log10(3));
     float b= ceil(log10(n) /log10(3));
     // to check power of any number use the above logic
     if(a==b)
        cout<<"yes"<<endl;
     else
        cout<<"no"<<endl;
     cout<<a <<" "<<b;
}
