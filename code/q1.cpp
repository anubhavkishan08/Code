#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,c=1,mg=1,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> arr(n);
        for(i=0;i<n;i++)
            cin>>arr[i];

   for(int i=0;i<n-1;i++)
   {
    if(arr[i+1]>arr[i])
    {
     c++;
     mg+=c;
    }
    else
    {
     if(c>1)
     {
      c--;
      mg+=c;
     }
     else
     {
      mg+=c;
     }
    }
   }
   cout<<mg<<endl;
   mg=0;
 }
}
