#include<iostream>
using namespace std;
class Date
{
	public:
	int value;
	int newdate()
	{
		int n,result;
		cout << "Add how many date\t";
		cin >> n;
		result = value + n;
		if(result >30)
		{
			return(result%30);
		}
		if(result<=30)
		{
			return(result);
		}
	}
	void olddate(int date)
	{
		value = date;
	}
};
int main()
{
	int date,n;
	Date obj;
	cout<<"Enter the olddate\t";
	cin>>n;
	obj.olddate(n);
	cout<<"The old Date is\t"<<obj.value<<"\n";
	date = obj.newdate();
	cout<<"The new Date is\t"<<date<<"\n";
	return 0;
}
