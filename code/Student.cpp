#include<iostream>
#include<cstring>
using namespace std;
class Student
{
	public:
	int age,roll_no;
	string name;
	void enter_details(string nm,int ag,int roll)
	{
		name = nm;
		age = ag;
		roll_no = roll;
		display();
	}
	void display()
	{
		cout <<"age is : "<< age <<endl;
		cout <<"roll_no is "<< roll_no <<endl;
		cout <<"name is "<< name <<endl;
	}
};
int main()
{
	Student obj;
	int age,roll_no;
	string name;
	cout<< "Enter the name age and roll no\t";
	cin >> name;
	cin >> age;
	cin >> roll_no;
	obj.enter_details(name,age,roll_no);
	return 0;
}
