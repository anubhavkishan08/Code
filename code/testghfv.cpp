#include<bits/stdc++.h>
using namespace std;
 vector<long long int> arr;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t,a,b,i,j,flag=0;
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
             arr.push_back(i);
    }
    sort(arr.begin(),arr.end());


        cout<<arr.size()<<endl;
        arr.clear();
    }
}
