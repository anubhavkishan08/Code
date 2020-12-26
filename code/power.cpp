#include<iostream>
using namespace std;
double power(double);
int power(int);
int main()
{
	double n,value,p;
	int no,value1;
	cout<< "Enter the value of n\t";
	cin >> n;

	cout<<"Enter the value of int n\t";
	cin >> no;
	value = power(n);
	value1 = power(no);
	cout<<"the value are\t"<<value<<"\tand\t"<<value1<<"\n";
	return 0;
}
double power (double n)
{
	int p=2,i;
	char choose;
	double mult=1.0;
	cout<<"Do you want to enter the value of p(Y/N)";
	cin>> choose;
	if(choose == "Y")
	{
		cout<<"Enter the value of p\t";
		cin>>p;
	}
	for(i=0;i<p;i++)
	{
		mult *= n;
	}
	return mult;
}
int power (int n)
{
	int p=2,i,mult=1;
	char choose;
	cout<<"Do you want to enter the value of p(Y/N)";
	cin>> choose;
	if(choose == "Y")
	{
		cout<<"Enter the value of p\t";
		cin>>p;
	}
	for(i=0;i<p;i++)
	{
		mult *= n;
	}
	return mult;
}
