#include<iostream>
using namespace std;
void withdef()
{
    int hisnum=30;
    for(int i=20;i<=hisnum;i+=5)
    {
        cout<<i<<endl;
    }
}
void control(int &mynum)
{
    mynum=mynum+10;
    withdef();
}
int main()
{
    int younum=20;
    control(younum);
    withdef();
    cout<<"Number="<<younum<<endl;
}
