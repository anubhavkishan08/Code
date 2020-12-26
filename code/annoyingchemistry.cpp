#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,p,q,a,b,c,gcd;
    int b1,b2,b3;
    cin>>x>>y>>p>>q;
         b1=p*y;
         b2=x*q;
         b3=((b1*x)+(b2*y))/(p+q);
         a=b1;
         b=b2;
         c=b3;
          for (int i = 1; i <= a && i <= b && i <= c; i++)
   {
      if (a % i == 0 && b % i == 0 && c % i == 0)
            gcd = i;
   }

    cout<<b1/gcd<<" "<<b2/gcd<<" "<<b3/gcd;
}
