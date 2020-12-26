#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s,s1;
   int n,n1,k,sum=0,sum1=0;
   cin>>s>>k;
   n=stoi(s);
   while(n>0 && k>0)
   {
       n1=n%10;
       n=n/10;
       sum=sum+n1;
sum1=sum1+sum;
}
k--;
cout<<sum1;
}
