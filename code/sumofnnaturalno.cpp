#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if(n==0 || n==1)
        return n;

    return sum(n-1)+n;
}
int main()
{
    int a;
    cin>>a;
    cout<<sum(a);
}
