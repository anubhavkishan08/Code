#include<iostream>
using namespace std;
int main()
{
   long long int n,L,R;
    cin>>n;
    for(long int i=0;i<n;i++)
    {
       long long int sum=0;
     long int c=0;
        cin>>L;
        cin>>R;
    for(long int j=L;j<=R;j++)
    {
        sum=sum+j;
        c=c+1;
    }
    cout<<sum/c<<"\n";
    }
}
