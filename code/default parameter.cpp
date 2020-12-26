#include<iostream>
using namespace std;
int  fun(int i=1,int j=1,int k=1)
{

    cout<<i<<""<<j<<""<<k;

}
int main()
{

     fun();
     fun(5);
     fun(5,6);
     fun(7,2,5);
     fun();
    return 0;

}
