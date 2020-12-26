#include<iostream>
#include<cstring>
using namespace std;
class Library
{
	public:
	int book_no,no_copied_issue,no_copies;
	float prices;
	string book_name,book_author,book_publisher;
	void assign(int no,int issued, int copies, float price, string name, string author, string publisher)
	{
		book_no = no;
		no_copied_issue = issued;
		no_copies = copies;
		prices = price;
		book_name = name;
		book_author = author;
		book_publisher = publisher;
	}
	int book_number()
	{
		return book_no;
	}
	void book_issue()
	{
		if ((no_copies-no_copied_issue)<=0)
		{
			cout<<"Book is not present in the stock";
		}
		else
		{
			no_copied_issue += 1;
			//no_copies -= 1;
		}
		display();
	}
	void return_book()
	{
		no_copied_issue -= 1;
		//no_copies += 1;
		display();
	}
	void display()
	{
		cout<<book_name<<endl;
		cout<<book_no<<endl;
		cout<<book_author<<endl;
		cout<<book_publisher<<endl;
		cout<<prices<<endl;
		cout<<no_copied_issue<<endl;
		cout<<no_copies<<endl;
	}

};
int main()
{
	int no,issued,copies,n,choice,bok,choose,i;
	float price;
	string name,author,publisher;

	cout<<"How many book you want to add?";
	cin>>n;
	Library obj[n];
	for(i=0;i<n;i++)
	{
		cout<< "Enter book no, issued, total copies, price, name, author, publisher of the book\t";
		cin >> no;
		cin>>issued>>copies;
		cin>>price;
		cin >> name;
		cin >> author;
		cin>>publisher;
		obj[i].assign(no,issued,copies,price,name,author,publisher);
	}
	while(1)
	{
		cout<<"Press 1 to enter log\nPress 2 to exit";
		cin>>choice;
		switch(choice)
		{
			case 1:
			{
				cout<<"Give book_no";
				cin>>bok;
				for(i=0;i<n;i++)
				{
					if(bok == obj[i].book_no)
					{
						cout<<"Press 1 to issue\nPress 2 to return\nPress 3 to exit\n";
						cin>>choose;
						switch(choose)
						{
							case 1:
							{
								obj[i].book_issue();
								break;
							}
							case 2:
							{
								obj[i].return_book();
								break;
							}
							case 3:
							{
								exit(0);
							}
						}
					}
				}
				break;
			}
			case 2:
			{
				exit(0);
			}
		}
	}

	return 0;
}
