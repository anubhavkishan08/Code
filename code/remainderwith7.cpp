#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    string n;
    int n1;
    cin>>n;
    n1=stoi(n);
    if(n1<7)
        cout<<to_string(n1);
    else if(n1==7){
        n1=0;
        cout<<to_string(n1);
    }
    else{
        n1=n1%7;
        cout<<to_string(n1);
    }
    }
}
