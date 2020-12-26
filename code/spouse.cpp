#include<iostream>
#include <string>
#include <stdio.h>

using namespace std;
class Person
{
  public:
    char name[200],num[20];
    void setinfo()
    {
        cout<<"Enter your Name: ";
        cin.getline(name,200);
        cout<<"Your Mobile Number: ";
        cin>>num;
    }
    void display()
    {
        cout<<endl<<"Your Name is = "<<name;
        cout<<endl<<"Your Mobile Number = "<<num;
    }
    ~Person()
    {
    }
};

class Spouse:public Person
{
  public:
    char spouse[200];
    void setinfo()
    {
        fflush(stdin);
        cout<<"Enter Spouse Name= ";
        cin.getline(spouse,200);
        cout<<"Enter Mobile Number= ";
        cin>>num;
    }
    void display()
    {
        cout<<endl<<"Spouse Name: "<<spouse;
        cout<<endl<<"Spouse Mobile Number = "<<num;
    }
};

int main()
{
    Person p;
    Spouse s;
    p.setinfo();
    s.setinfo();
    p.display();
    s.display();
    return 0;
}

