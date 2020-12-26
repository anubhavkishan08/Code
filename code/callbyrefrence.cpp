#include<bits/stdc++.h>
using namespace std;
void change(int *num)
{
    *num+=100;
}
int main()
{
    int x;
    cin>>x;
    change(&x);
    cout<<x<<endl;
}

