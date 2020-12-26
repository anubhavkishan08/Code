#include<iostream>
using namespace std;
void swap(int &x,int &y)
{

    int t;
    t=x;
    x=y;
    y=t;

}
int main()
{
int a,b;
    cout<<"enter two numbers:";
    cin>>a>>b;
    swap(a,b);
    cout<<"after swapping";
    cout<<"a"<<a;
    cout<<"b:"<<b;
    return 0;
}
