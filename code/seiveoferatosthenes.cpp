#include<bits/stdc++.h>
using namespace std;

int seiveofErastothenes(int n)
{
    vector<int> Primes(n+1);
   // int Primes[n+1];
    Primes[0]=0;Primes[1]=0;
    for(int i=2;i<=n;i++)
         Primes[i]=1;
    for(int i=2;i*i<=n;i++)
    {
        if(Primes[i]==1)
        {
            for(int j=2;i*j<=n;j++)
                Primes[i*j]=0;
        }
    }
   return Primes[n];
}
int main()
{
    int n,t;
    cin>>t;
    while(t--){
    cin>>n;
    if(seiveofErastothenes(n)==1)
        cout<<"prime";
    else
        cout<<"not prime";
    }
}
