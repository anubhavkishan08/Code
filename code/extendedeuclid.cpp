#include<bits/stdc++.h>
using namespace std;
#include <utility>
#include <boost/multiprecision/cpp_int.hpp>

using boost::multiprecision::cpp_int;
long long int power_fn(long long int no,long long int power,long long int m)
{
   long long int ans=1;
    while(power>0){
    if(power%2==1)
        ans=(ans*no);
       no=(no*no);
       power=power/2;
    }
    return (ans)%m;
}

int modInverse(long long int A,int M)
{
    A=A%M;
    for(int B=1;B<M;B++)
        if(((A*B)%M)== 1)
            return B%M;
}
int main()
{
   cpp_long long int n,p,m,c;
    cin>>n;
    cin>>p;
    cin>>c;
    cin>>m;
  int ans1=(power_fn(n,p,m));
   long long int ans2=modInverse(c,m);
   long long int ans=(ans1*ans2)%m;
   cout<<ans;
}
