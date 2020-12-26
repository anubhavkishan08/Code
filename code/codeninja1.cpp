#include<bits/stdc++.h>
using namespace std;
#define MAX 500
long long int result[1000] = {0};
long long int fact(long long int n) {
   if (n >= 0) {
      result[0] = 1;
      for (int i = 1; i <= n; ++i) {
         result[i] = i * result[i - 1];
      }
      return result[n];
   }
}
int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t,a,b,product=0,ans=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        ans=fact(a);
        cout<<ans%b<<endl;
        ans=0;
        product=0;
    }
}
