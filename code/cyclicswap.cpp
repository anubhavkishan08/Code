#include<iostream>
using namespace std;
void swap (int &,int &);
int main()
{
	int a,b;
	cout<<"Enter two number\t";
	cin>>a>>b;
	swap(a,b);
	cout<<"Swaped number is "<<a <<" & "<<b<<"\n";
	return 0;
}
void swap (int &x,int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
