#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,flag=0;
    cin>>n;
    for(i=1;i*i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if((i*i)+(j*j)==n || (i*i)==n){
                flag=1;
                break;}
            else
                flag=0;
        }
    }
     if(flag==1)
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
}
