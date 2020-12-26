#include<bits/stdc++.h>
#include <utility>
//#include <boost/multiprecision/cpp_int.hpp>

//using boost::multiprecision::cpp_int;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
       long long int sum=0;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        for(i=0;i<n;i++)
          cin>>a[i];
        for(i=0;i<n;i++)
            cin>>b[i];
            int ad=0,bd=0;
        for(i=0;i<n;i++)
        {
            ad+=a[i];
            bd+=b[i];
            if(a[i]==b[i]  && ad==bd)
               sum=sum+a[i];
        }
        cout<<sum<<"\n";
        cout<<ad<<" "<<bd;
    }
}
