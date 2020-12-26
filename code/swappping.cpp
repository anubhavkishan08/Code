#include<iostream>
using namespace std;
void callval(int,int);
void calladd(int *,int *);
void caallref(int&,int&);
int main()
{

    int a,b;
    cout<<"enter:";
    cin>>a>>b;
    callval(a,b);
    calladd(&a,&b);
    caallref(a,b);
}
void callval(int a,int b)
{
    cout<<"\in call by value";
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<b;
}
void calladd(int *a,int *b)
{
    cout<<"\in call by address";
    int t;
    t=*a;
    *a=*b;
    *b=t;
    cout<<*a<<*b;
}
void caallref(int &a,int &b)
{cout<<"\in call by ref";
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<b;
}

