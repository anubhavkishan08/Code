#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    int a[10];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=1;j<n;j++)
      {
        if(a[n-1-i]>a[n-1-j]){
            swap(a[n-1-i],a[n-1-j]);
            break;
        }
         else if(a[i]>a[j])
               sort(a,a+n);
      }
    }

    for(i=0;i<n;i++)
        cout<<a[i];
}
