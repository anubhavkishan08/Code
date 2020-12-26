#include<bits/stdc++.h>
using namespace std;
 //vector<int> arr;
int main()
{
   long long int t,a,b,i,j,flag=0,c=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
         for(i=a;i<=b;i++)
    {
        if (i == 1 || i == 0)
            continue;
       flag=1;
         for (j = 2; j*j <= i; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
         }
           if (flag == 1)
                c++;
    }


        cout<<c<<endl;
        c=0;
    }
}
