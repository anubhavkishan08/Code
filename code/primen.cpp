#include<iostream>
#include<math.h>
#include<cstdlib>
using namespace std;

int isprime()
{
    int n;
cin>>n;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            cout<<"not prime";
        else
            cout<<" prime";
    }
}
int* primesum(int A, int *len1) {

     *len1 = 2;
    int i=2;
    int *a = (int *)malloc(2*sizeof(int));
    for(i=2;i<=A/2;i++)
    {

        if(isprime()&&isprime())
        {
            a[0] = i;
            a[1] = A-i;
            return a;
        }
        if(i!=2)
            i++;
    }
int main()
{
  int c=isprime();
   return c;
}

