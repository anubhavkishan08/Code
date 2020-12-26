#include <bits/stdc++.h>
using namespace std;

struct details
{
  string bats_name,bowler_name;
  int total_runs,bats_score;
  string out;
  string mode_out;
 int overs_played;
 int total_overs,extras;
  int overs_bowled,maiden_overs,runs_given,
   wicket_taken;

}a[100],b[100];

int main()
{
  int flag=0,choice,sum=0;
  cout<<"WELCOME TO CRICKET TOURNAMENT"<<endl;

  while(1)
 {
  cout <<"Press 1 to enter batting's team info: " << endl;
  cout <<"Press 2 to enter bowling team info: " << endl;
  cout << "Press 3 to display batting team's info" << endl;
    cout << "Press 4 to display bowling's team info:" << endl;
  cout << "Press 5 to exit: " << endl;
  cout << "Enter your choice: ";
    cin >> choice;

  switch(choice)
  {
    case 1:
  cout << "-----Enter batsmen details----" << "\n";
   cout << "Enter batsmen name: ";   cin.ignore(numeric_limits<streamsize>::max(),'\n');
   getline(cin,a[0].bats_name);
  cout << "Runs scored: ";
  cin >> a[1].bats_score;
  cout << "Is batsmen out?: ";  cin.ignore(numeric_limits<streamsize>::max(),'\n');
  cin >> a[2].out;
  if(a[2].out == "Yes" || a[2].out=="YES" ||
  a[2].out=="yes")
  {
   flag=1;
    sum+=a[1].bats_score;
   cout << " Mode by which out: ";
  cin >> a[3].mode_out;
  cout << "Total overs played: ";
  cin >> a[4].overs_played;
  cout << "Total overs: ";
  cin >> a[5].total_overs;
  cout << "Extras: ";
  cin >> a[6].extras;
  }
  else
  {
    sum+=a[1].bats_score;
   }
  break;

  case 2:
    cout << "Enter bowler's name: "; cin.ignore(numeric_limits<streamsize>::max(),'\n');
    getline(cin,b[0].bowler_name);
    cout << "Over's bowled are: ";
    cin >> b[1].overs_bowled;
    cout << "Maiden overs: ";
    cin >> b[2].maiden_overs;
    cout << "Runs given: ";
    cin >> b[3].runs_given;
    cout <<"Wickets taken: ";
    cin >> b[4].wicket_taken;
    break;

    case 3:

    a[7].total_runs=sum + a[6].extras;
    cout << a[0].bats_name<< endl;
    if(flag==1)
    {
    cout << a[2].out << endl;
    cout << a[3].mode_out << endl;
    cout <<a[7].total_runs<< endl;
    cout << a[4].overs_played<< endl;
    cout << a[5].total_overs << endl;
    cout << a[6].extras << endl;
    }
    else
    cout <<"Batsmen is still playing" << endl;
    break;

    case 4:

     cout << b[0].bowler_name << endl;
     cout << b[1].overs_bowled << endl;
     cout << b[2].maiden_overs << endl;
     cout << b[3].runs_given << endl;
     cout << b[4].wicket_taken <<endl;
     break;

    case 5:
     exit(0);
    default:
     cout << "Wrong choice" << endl;
   }
  }
}
