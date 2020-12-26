#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n1,n2,n3;
     cin>>n1;
     cin>>n2;
     n3=n1-n2;
     n3=n3+1;
     cout<<n3;
     if(n3%10==9)
        n3=n3+1;
    else
        n3--;
}
