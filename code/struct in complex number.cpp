#include<iostream>
using namespace std;
int multi(int,int);
int subt(int,int);
int addi(int,int);
int divi(int,int);
struct complex
{
	int real;
	int imag;
};
int main()
{
	int mult1,mult2,sub1,sub2,add1,add2,div1,div2,com;
	struct complex x,y;
	cout << "Enter real and imaginary part of the number\t";
	cin >> x.real >> x.imag;
	cout << "Enter real and imaginary part of the number\t";
	cin >> y.real >> y.imag;
	while(1)
	{
		cout << "1 for mult\n2 for add\n3 for sub\n4 for division\n5 for exit\nEnter your chooice\n";
		cin >> com;
		switch(com)
		{
			case 1:
			{
				mult1 = multi(x.real,y.real);
				mult2 = multi(x.imag,y.imag);
				cout << "The multiplication is\t"<<mult1<<"+i"<<mult2<<"\n";
				break;
			}
			case 2:
			{
				add1 = addi(x.real,y.real);
				add2 = addi(x.imag,y.imag);
				cout << "The addition is\t"<<add1<<"+i"<<add2<<"\n";
				break;
			}
			case 3:
			{
				sub1 = subt(x.real,y.real);
				sub2 = subt(x.imag,y.imag);
				cout << "The substition is\t"<<sub1<<"+i"<<sub2<<"\n";
				break;
			}
			case 4:
			{
				div1 = divi(x.real,y.real);
				div2 = divi(x.imag,y.imag);
				cout << "The division is\t"<<div1<<"+i"<<div2<<"\n";
				break;
			}
			case 5:
			{
				exit(0);
			}
			default:
			{
				cout << "You entered a wrong number\n";
			}
		}
	}
}
int multi(int x,int y)
{
	return(x*y);
}
int subt(int x,int y)
{
	return(x-y);
}
int addi(int x,int y)
{
	return(x+y);
}
int divi(int x,int y)
{
	return(x/y);
}
