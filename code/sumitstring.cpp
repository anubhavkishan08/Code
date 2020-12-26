#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
	int t,flag=0;
	cin>>t;
	while(t--)
    {
        int n,i;
        string s;
        cin>>s;
        n=s.size();
        for(i=0;i<s.size()-1;i++)
        {
            if(s[i+1]-s[i]==1 || s[i]-s[i+1]==25 || s[i+1]-s[i]==-1 || s[i]-s[i+1]==-25)
                //{
                flag=1;
                //cout<<flag<<" ";}
            else{
                flag=0;
               // cout<<flag<<" ";
                 break;
            }
        }
         if(flag==1 || n==1)
            cout<<"YES"<<"\n";
         else
            cout<<"NO"<<"\n";
    }

}
