#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s;
    int n;
    cin>>s>>n;
    if(s=='c' || s=='C')
    {
        if(n==1)
        {cout<<"Welcome to CCD!"<<endl;
            cout<<"Enjoy your Espresso Coffee"<<endl;
        }
        else if(n==2){cout<<"Welcome to CCD!"<<endl;
            cout<<"Enjoy your Cappuccino Coffee"<<endl;}
        else if(n==3){cout<<"Welcome to CCD!"<<endl;
            cout<<"Enjoy your Latte Coffee"<<endl;}
        else
            cout<<"INVALID OPTION!"<<endl;
    }
    else if(s=='t' || s=='T')
    {
        if(n==1){
            cout<<"Welcome to CCD!"<<endl;
          cout<<"Enjoy your Plain Tea"<<endl;}
        else if(n==2){cout<<"Welcome to CCD!"<<endl;
        cout<<"Enjoy your Assam Tea"<<endl;}
        else if(n==3){cout<<"Welcome to CCD!"<<endl;
        cout<<"Enjoy your Ginger Tea"<<endl;}
         else if(n==4){
        cout<<"Enjoy your Cardamom Tea"<<endl;}
         else if(n==5){
        cout<<"Enjoy your Masala Tea"<<endl;}
         else if(n==6){cout<<"Welcome to CCD!"<<endl;
        cout<<"Enjoy your Lemon Tea"<<endl;}
         else if(n==7){cout<<"Welcome to CCD!"<<endl;
        cout<<"Enjoy your Green Tea"<<endl;}
         else if(n==8){cout<<"Welcome to CCD!"<<endl;
        cout<<"Enjoy your Assam Tea"<<endl;}
        else
            cout<<"INVALID OPTION!"<<endl;
    }
    else if(s=='s' || s=='S')
    {
        cout<<"Welcome to CCD!"<<endl;
         if(n==1){cout<<"Welcome to CCD!"<<endl;
        cout<<"Enjoy your Hot and Sour Soup"<<endl;}
         else if(n==2){cout<<"Welcome to CCD!"<<endl;
        cout<<"Enjoy your Veg Corn Soup"<<endl;}
         else if(n==3)
        cout<<"Enjoy your Tomato Soup"<<endl;
         else if(n==4){cout<<"Welcome to CCD!"<<endl;
        cout<<"Enjoy your Spicy Tomato Soup"<<endl;}
        else
         cout<<"INVALID OPTION!"<<endl;
    }
    else if(s=='b' || s=='B')
    {

         if(n==1){
                cout<<"Welcome to CCD!"<<endl;
        cout<<"Enjoy your Hot Chocolate Drink"<<endl;
         }
        else if(n==2){cout<<"Welcome to CCD!"<<endl;
        cout<<"Enjoy your Badam Drink"<<endl;
        }
         else if(n==3){cout<<"Welcome to CCD!"<<endl;
        cout<<"Enjoy your Badam-Pista Drink"<<endl;}
        else
         cout<<"INVALID OPTION!"<<endl;
    }
}
