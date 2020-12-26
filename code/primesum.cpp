#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,i,j,c;
    int sum=0;
    cout<<"enter the no";
    cin>>n;
    for(i=2;i<=n;i++)
    {
        int c=0;
         for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
       if(c==2)
        {
            cout<<i;
        }
    }
}
