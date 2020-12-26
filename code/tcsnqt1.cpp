#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0;
    cin>>n;
    if(n>0 && n<=7000)
    {
        if(n<=2000)
        {
            a=25;
            cout<<"Time Estimated:"<<a<<" "<<"Minutes"<<endl;
        }
        else if(n>2000 && n<=4000){
            a=35;
            cout<<"Time Estimated:"<<a<<" "<<"Minutes"<<endl;
        }

        else{
                a=45;
            cout<<"Time Estimated:"<<a<<" "<<"Minutes"<<endl;
        }

    }
    else if(n>7000)
        cout<<"OVERLOADED!"<<endl;
    else
        cout<<"INVALID INPUT."<<endl;
}

