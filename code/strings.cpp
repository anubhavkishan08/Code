#include<iostream>
#include<string.h>
using namespace std;


int main()
{
    char a[5000],b[5000],c[5000],d[5000];
    int len,len1;
    cin>>a;
    cin>>b;
len=strlen(a);
len1=strlen(b);
cout<<len<<" "<<len1<<endl;
strcpy(c,a);
strcpy(d,b);
strcat(c,d);
cout<<c<<endl;

 swap(a[0],b[0]);

 cout<<a<<" "<<b;

}
