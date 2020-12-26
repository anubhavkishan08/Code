#include<bits/stdc++.h>
using namespace std;
int main()
{

    int year;
    cin>>year;
    int day=0;
     if(year>=1700 && year<=1917)
     {
         if(year%4==0)
            day=256-244;
         else
            day=256-243;
     }
     else if(year>1918 && year<=2700)
     {
         if(year%400==0 || year%4==0 && year%100!=0)
            day=256-244;
         else
            day=256-243;
     }
      else{
          if(year==1918)
              day=26;
          }
  cout<<day<<".09"<<"."<<year;

}
