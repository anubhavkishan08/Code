////REVERSE THE NO SOLUTION-2
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,i,n,rem,rev=0;
    cin>>t;
    while(t--){
       cin>>n;
     while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n/10;
     }
        cout<<rev<<"\n";
        rev=0;
    }
}

