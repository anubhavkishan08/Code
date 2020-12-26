#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i;
 char str[10],str1[10];
 cin>>str;
 n=strlen(str);
 cout<<n<<"\n";
 for(i=1;i<=n;i++)
 {
      k=str[i];
        cout<<k<<endl;
     if((k>=97)||(k<=122))
     {
     str1[i]=str[n-1];
     }
     n=n-1;
 }
 cout<<str1;
}
