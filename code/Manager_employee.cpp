#include<iostream>
#include <stdio.h>

using namespace std;
class employee
{
 int num[20];
 char add[20][200],name[20][100],depart[20][100];
 public:
 void input(int i)
 {
 cout<<"Enter the Employee "<<i+1<< " " << "name: ";
 cin.getline(name[i],100);
 fflush(stdin);
 cout<<"Enter the employee number: ";
 cin>>num[i];
 fflush(stdin);
 cout<<"Enter the address of the employee: ";
 cin.getline(add[i],200);
 fflush(stdin);
 cout<<"Enter the department: ";
 cin.getline(depart[i],100);
 fflush(stdin);
 return;
 }

 void output(int i)
 {
  cout << "\n";
  cout << "----------------Employee " << i+1 << "-------------------" << endl;
  cout << "Employee No. " << num[i] << endl;
 cout<< "Employee name: " << name[i]<< endl;
 cout<< "Employee Address: "<< add[i] << endl;
 cout<< "Employee's Department: " <<depart[i] << endl;
  return;
 }
};

class manager: public employee
{
 char name[200];
 int n ,i;
 public:

 void info(int i)
{
  cout<<"Enter the Manager " << i+1 <<" name: ";
  fflush(stdin);
 cin.getline(name,200);
 cout<<"enter the total number of employee's working under him: ";
 cin>>n;
 fflush(stdin);
 for(i=0;i<n;i++)
 {
 input(i);
 }
}

 void display(){
     cout << endl;
 cout<<"Manager's name: " << name;
 cout<<"\nThe list of Employee's are: " ;
 for(i=0;i<n;i++)
 {
 output(i);
 }
}
};

int main()
{
 manager M[10];
 int no;
 cout << "Enter the no. of managers: ";
 cin >> no;
 for(int i=0;i<no;i++)
    M[i].info(i);

 for(int j=0;j<no;j++)
    M[j].display();

}
