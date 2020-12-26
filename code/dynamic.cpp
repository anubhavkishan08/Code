#include<iostream>
using namespace std;
int main()
{

    int i,n;
    cin>>n;
    int *ptr=new int[n];
    if(ptr==NULL)
    {
        cout<<"failed";

    }
    else{
        cout<<"enter elements:";
        for(i=0;i<n;i++)
        {
            cout<<"eleements:";
            cin>>*(ptr+i);
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<*(ptr+i)<<endl;
    }
    delete ptr;
    for(i=0;i<n;i++)
        cout<<*(ptr+i)<<endl;
}
