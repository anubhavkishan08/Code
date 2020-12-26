#include<iostream>
using namespace std;
void callval(int,int);
void calladd(int*,int*);
void caallref(int&,int&);
int main()
{

    int a,b;
    cout<<"enter:";
    cin>>a>>b;
    callval(a,b);
    calladd(&a,&b);
    callref(a,b);
}
void callval(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<b;
}
void calllref(int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<b;
}
void calladd(int *a,int *b)
{int t;
    t=*a;
    *a=*b;
    *b=*c;
    cout<<a<<b;
}
