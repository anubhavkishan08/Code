//REVERSE THE NO SOLUTION-1
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,rem,rev=0,c=0;
    vector<int> a;
  cin>>t;
  for(i=0;i<t;i++){
       cin>>n;
     while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n/10;
     }
      a.push_back(rev);
      c++;
      rev=0;
  }
  for(i=0;i<c;i++)
    cout<<a[i]<<"\n";
}
