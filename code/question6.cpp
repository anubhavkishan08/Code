#include<iostream>
using namespace std;
int main()
{

    int a,b,c;

    try{
        a=6;
        b=0;
    c=(a/b);
    cout<<"division result:"<<c;
    }
    catch (int e)
    {
        cout<<"divide by zero not possible";
    }


}
