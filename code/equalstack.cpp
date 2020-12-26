#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
int main() {
int a,b,c,i;
cin>>a>>b>>c;
int s1[a],s2[b],s3[c];
long long int sum1=0,sum2=0,sum3=0;
for(i=0;i<a;i++)
    {
      cin>>s1[i];
      sum1=sum1+s1[i];
    }

for(i=0;i<b;i++)
   {
        cin>>s2[i];
       sum2=sum2+s2[i];
    }
for(i=0;i<c;i++)
    {
         cin>>s3[i];
      sum3=sum3+s3[i];
    }
int p=0,q=0,r=0;
     while(sum1!=sum2 ||sum2!=sum3 ||sum1!=sum3)
    {
	if(sum1>sum2 && sum1>sum3|| sum1==sum2 && sum1>sum3 || sum1==sum3 &&sum1>sum2)
      sum1=sum1-s1[p++];
     else if(sum2>sum1 && sum2>sum3|| sum2==sum1 && sum2>sum3 || sum2==sum3 &&sum2>sum1)
            sum2=sum2-s2[q++];
     else if(sum3>sum1 &&sum3>sum2 || sum3==sum2 && sum3>sum1 || sum3==sum1 &&sum3>sum2)
            sum3=sum3-s3[r++];
  }
        cout<<sum1;
   return 0;
}
