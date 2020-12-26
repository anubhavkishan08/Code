#include<iostream>
using namespace std;
int add(int x,int y)
{
	int c;
	c = x + y;
	cout<<"Addition value is "<<c<<"\n";
}
char add(char *x,char *y)
{
	cout<<"String is "<<x<<y<<"\n";
}

int main()
{
	int a,b;
	char c[10],d[10];
	cout <<"Enter two number\t";
	cin>>a>>b;
	cout<<"Enter two string\t";
	cin>>c>>d;
	add(a,b);
	add(c,d);
	return 0;
}

