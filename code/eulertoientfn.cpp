#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MAX = 100001;
vector<ll> p;
//using naive approach O(n)
int eutf(int n)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(__gcd(i,n)==1)
            c++;
    }
    return c;
}
//using seive approach O(nloglogn)
void init()
{
    ll isPrime[MAX+1];

    for (ll i = 2; i<= MAX; i++)
    {
        if (isPrime[i] == 0)
        {
            p.push_back(i);

            for (ll j = 2; i * j<= MAX; j++)
                isPrime[i * j]= 1;
        }
    }
}
ll phi(ll n)
{
    ll res = n;
    for (ll i=0; p[i]*p[i] <= n; i++)
    {
        if (n % p[i]== 0)
        {
            res -= (res / p[i]);
            while (n % p[i]== 0)
               n /= p[i];
        }
    }
    if (n > 1)
       res -= (res / n);

    return res;
}

int main()
{
    int n;
    cin>>n;
  //  cout<<eutf(n)<<endl;
    init();
    cout<<phi(n);
}
