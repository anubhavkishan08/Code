#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,m,c=0,d=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        m=n;
        //m=m/2;
        vector<int> arr(n);
        for(i=0;i<n;i++)
            cin>>arr[i];
            sort(arr.begin(),arr.end());
         while(m>0){
        for(i=0;i<n;i++)
        {
            if(arr[i]==n)
                c++;
        }
        n=n-c;
        d=c;
        c=0;
        m=m-d;
      }

         if(n==0)
         cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
