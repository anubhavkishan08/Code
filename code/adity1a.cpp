#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,no,i=0,dec=0;
    int bin[100];
    cin>>n;
    while(n!=0)
    {
        no=n%10;
        n=n/10;
        dec=dec+no*pow(2,i);
        i++;
    }

cout<<dec;
}
