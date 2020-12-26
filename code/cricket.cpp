#include<iostream>
using namespace std;
struct cricket
{
	int run,wicket,maiden_over;
	float over;
	string name;
}batsman[15],baller[15];
int main()
{
	int n,i,n1,choice;
	cout << "Enter the number of batsman\t";
	cin >> n;
	cout << "Enter the player_name, run, over\n";
	for(i=0;i<n;i++)
	{
		cin>>batsman[i].name>>batsman[i].run>>batsman[i].over;
	}
	cout << "Enter the number of baller\t";
	cin >> n1;
	cout << "Enter the player_name, run, wickets, maiden_over, over\n";
	for(i=0;i<n1;i++)
	{
		cin>>baller[i].name>>baller[i].run>>baller[i].wicket>>baller[i].maiden_over>>baller[i].over;
	}

	while(1)
	{
		cout<<"Press 1 to edit batsman details\nPress 2 to edit batsman details\nPress 3 to exit";
		cin>>choice;
		switch(choice)
		{
			case 1:
			{
			    string bat;
				cout<<"Give batsman_name";
				cin>>bat;
				int count = 0;
				for(i=0;i<n;i++)
				{
					while(bat == batsman[i].name)
					{
					    int bat_run;
						cout<<"Enter run";
						cin>>bat_run;
						if(bat_run==9)
						{

							break;
						}
						else
						{
							batsman[i].run += bat_run;
							count += 1;
							if(count%6==0)
							{
								batsman[i].over += 1;
								count = 0;
							}
						}
					}
				}
				break;
			}
			case 2:
			{
			    string ball_name;
				cout<<"Give baller_name";
				cin>>ball_name;
				int count = 0;
				for(i=0;i<n;i++)
				{
						while(ball_name == baller[i].name)
						{
						    int ball_run;
							cout << "Enter run";
							cin>>ball_run;
							count += 1;
							blank += ball_run;
							baller[i].run += ball_run;
							if(ball_run == 15)  //No
							{
								baller[i].run -= 15;
								count -= 1;
								baller[i].run += 1;
								cout<<"How many run added extra\t";
								cin>>extra;
								if(extra >0)
								{
									baller[i].run += extra;
								}
							}
							if(ball_run == 20) //Wicket
							{
								baller[i].run -= 20;
								baller[i].wicket += 1;
							}
							if(ball_run == 25) //wide
							{
								baller[i].run -= 25;
								count -= 1;
								baller[i].run += 1;
								cout<<"How many run added extra\t";
								cin>>extra;
								if(extra >0)
								{
									baller[i].run += extra;
								}
							}
							if(count%6==0)
							{
								if(black == 0)
								{
									baller[i].over += 1;
									ball = " ";
									baller[i].maiden_over += 1;
									break;
								}
								else
								{
									baller[i].over += 1;
									ball = " ";
									break;
								}
							}
						}
				}
				break;
			}
			case 3:
			{
				exit(0);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<batsman[i].name<<"\t"<<batsman[i].run<<"\t"<<batsman[i].over<<endl;
	}
	for(i=0;i<n1;i++)
	{
		cout<<baller[i].name<<"\t"<<baller[i].run<<"\t"<<baller[i].wicket<<"\t"<<baller[i].maiden_over<<"\t"<<baller[i].over<<endl;
	}
}
