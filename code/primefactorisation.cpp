#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int primeFactorisation(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0){
            if(isPrime(i))
               cout<<i<<endl;}
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<primeFactorisation(n)<<endl;
}
