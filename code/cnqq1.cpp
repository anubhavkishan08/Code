#include<bits/stdc++.h>
using namespace std;
void toh(string a, string b, string c, int n)
{
    int i=0;
    if(n==0)
        return ;
    cout<<("prearea")<< i+1 <<endl;
    toh(a,b,c,n-1);
    cout<<"at"<<n<<endl;
    toh(b,c,a,n-1);
    cout<<"post area"<<n<<endl;
}
int main()
{
    string a,b,c;
    int n;
    toh(a,b,c,3);
}
