#include<bits/stdc++.h>
using namespace std;

int seive(long long int n)
{
    int i,j;
    bool isPrime[n+1];
    for(i=0;i<=n;i++)
    {
        isPrime[i]=true;
    }
    isPrime[0]=false;
    isPrime[1]=false;
    for(i=2;i*i<=n;i++)
    {
        if (isPrime[i]==true)
        {
            for(j=i*i;j<=n;j+=i)
            {
                isPrime[j]=false;
            }
        }
    }
    return isPrime[n];
}
int main()
{
   long long int n,t;
    cin>>t;
    while(t--){
    cin>>n;
    if(seive(n)==1)
        cout<<"prime"<<endl;
    else
        cout<<"composite"<<endl;
     // cout<<seive(n);
    }
}
