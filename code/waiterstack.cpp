#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,i,j=0,k=0;
     cin>>n;
     cin>>a;
    int s1[10];
    int s2[10];
    int s3[10];
while(a--){
    for(i=0;i<n;i++)
        cin>>s1[i];
    for(i=0;i<n;i++)
    {
        if(s1[i]%a==0)
        {
            s2[j]=s1[i];
            j++;
        }
        else{
            s3[k]=s1[i];
             k++;
            }
    }
}
     for(i=j;i>=0;i--)
        cout<<s2[i];

    for(i=k;i>=0;i--)
        cout<<s3[i];

}
