#include<iostream>
using namespace std;
int main()
{
    char a[10];
    int n,i,j;
    cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>a;
  }
    int c= int(a);
    for(int i=0;i<n;i++)
    {
        cout<<char(i+32);
    }

}
