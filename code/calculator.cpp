#include <iostream>

using namespace std;

template <class t>
t addition(t a,t b)
{
    return(a+b);
}

template <class t>
t subtract(t a,t b)
{
    return(a-b);
}

template <class t>
t mul(t a,t b)
{
    return(a*b);
}

template <class t>
t div(t a,t b)
{
    return(a/b);
}

int main()
{
    int a,b;
    int choice;
    while(1)
    {
        cout<<"WELCOME TO CALCULATOR::"<<endl;
        cout<<"Press 1 to add"<<endl;
        cout<<"Press 2 to subtract"<<endl;
        cout<<"Press 3 to multiply"<<endl;
        cout<<"Press 4 to divide"<<endl;
        cout<<"Enter your choice: "<<endl;
        cin>>choice;
        switch(choice)
        {
          case 1:
             cout<<"Enter two numbers: ";
             cin>>a>>b;
             cout<<addition(a,b)<<endl;
             break;

          case 2:
             cout<<"Enter two numbers: ";
             cin>>a>>b;
             cout<<subtract(a,b)<<endl;
             break;

          case 3:
             cout<<"Enter two numbers: ";
             cin>>a>>b;
             cout<<mul(a,b)<<endl;
             break;

          case 4:
             cout<<"Enter two numbers: ";
             cin>>a>>b;
             cout<<div(a,b)<<endl;
             break;

        }
    }
    return 0;
}
