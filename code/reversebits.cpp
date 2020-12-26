#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long int A;
 cin>>A;
  long long int n,num=0,find_bit=0,a=0,i,b;
  b=A;
    vector<int> B;
    while(A!=0)
    {
         n=A%2;
        B.push_back(n);
        A=A/2;
    }
       a=B.size();
      find_bit=32-a;
      num=num+pow(2,find_bit);
    num=num*b;
    cout<<num;
}
