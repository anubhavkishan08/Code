#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int A;
    cin>>A;
if(A==1) return 1;
    for (int i = 2; i*i <= A; i++) {
      int p = A;
      while(p%i == 0){
        p/=i;
      }
      if(p == 1) return 1;
    }
      return 0;
}
