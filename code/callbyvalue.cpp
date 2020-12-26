#include<bits/stdc++.h>
using namespace std;
int change(int num)
{
    num+=100;
    return num;
}
int main()
{
    int x;
    cin>>x;
    change(x);
    cout<<x<<endl;
}
