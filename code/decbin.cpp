#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i=0,n,d,sum=0;
    cout << "Enter a Decimal Number\t";
    cin >> n;
    while(n>0)
    {
        d = n%2;
        sum += d*pow(10,i);
        n = n/2;
        i++;
    }
    cout << "Corresponding Binary Number\n"<<sum<<"\n";
}
