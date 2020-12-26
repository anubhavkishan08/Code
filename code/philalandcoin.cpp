#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,t,sum=0;
    vector<int> a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<n;i++)
        {
            a.push_back(i);
            sum=sum+i;
            if(sum>=n)
                break;
        }

       // for(auto it: a)

        cout<<a.size()<<endl;
        a.clear();
        sum=0;
    }
}

