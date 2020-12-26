#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<a<<b;
     a=a xor b;
    b=a xor b;
    a=a xor b;
    a=a+b;
    b=a-b;
    a=a-b;
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<"\n"<<a<<b;
}
