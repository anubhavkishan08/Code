#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    int temp;
    //int a[10];
    vector<int> a(n);
    vector<int> b(n);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++){
        if(a[i]>=a[j])
        {
            c++;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
      }
    }
 cout<<c<<endl;
}
