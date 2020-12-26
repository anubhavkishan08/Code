#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,i,n;
    cin>>k;
    for(i=1;i<k;i++)
    {
        string s;
        cin>>n;
        cin>>s;
        if(s=="L"){
            cin>>n;
            cin>>s;}
        if(s=="G")
         {
             cin>>n;
             cin>>s;
         }
         if(s=="E")
            break;
    }
}
