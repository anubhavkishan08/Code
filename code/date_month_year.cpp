#include <bits/stdc++.h>
#include <cmath>
using namespace std;

class Date
{
  public:

  int d;
  int m;
  int y;

  Date newdate(Date obj1,int days)
 {
   Date obj2;
   int flag1=0,newmonth,flag2=0;

   if(obj1.d + days >30)
   {
     obj2.d=obj1.d+days - 30;
     flag1=1;
   }
   else
      obj2.d=obj1.d+days;


   if(flag1==1)
    {
      newmonth=obj1.m + 1;
     if(newmonth > 12)
     {
       obj2.m= newmonth - 12;
       flag2=1;

      }
   else
     obj2.m=newmonth;
   }
    else
      obj2.m=obj1.m;

   if(flag2==1)
    obj2.y=obj1.y + 1;
    else
     obj2.y=obj1.y;

  return obj2;

  }


};
int main()
{
  int d,m,y,n;
  cout << "Enter day,month and year: ";
   cin >> d >> m >> y;
  cout << "Enter no. of days to add: ";
   cin >> n;

   Date obj1,obj3;
   obj1.d=d;
   obj1.m=m;
   obj1.y=y;

   obj3=obj3.newdate(obj1,n);
   cout << "New Date: " << endl;
   cout << obj3.d << " " << obj3.m << " " << obj3.y;
}
