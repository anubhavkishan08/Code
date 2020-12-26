#include<bits/stdc++.h>
using namespace std;


bool SieveOfEratosthenes(int n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }
    return prime[n];
}
int main()
{
    int n,t;
    cin>>t;
    while(t--){
    cin>>n;
    if(SieveOfEratosthenes(n))
        cout<<"prime"<<endl;
    else
        cout<<"composite"<<endl;
    }
}
