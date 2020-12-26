#include<bits/stdc++.h>
using namespace std;

 int coprime(int x, int y)
{
    while (__gcd(x, y) != 1) {
        x = x / __gcd(x, y);
    }
    return x;
}

int main()
{
    int n,b;
    cin>>n;
    cin>>b;
    cout<<coprime(n,b);

}

