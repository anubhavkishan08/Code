#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b,t;
    vector<int> house(n);
    cin>>t;
    while(t>0){
    cin>>n;
    cin>>b;
    int i,c=0;
    for(i=0;i<n;i++){
        cin>>house[i];
    }
    for(i=0;i<n;i++)
    {
        if(house[i]<=b){
            b=b-house[i];
            c++;
        }
    }

        cout<<c<<endl;
    t--;
    }
}
