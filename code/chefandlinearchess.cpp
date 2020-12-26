#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
int main()
{
    float t,n,k,i,d,flag=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector<int> arr(n);
        vector< pair <int,int> > vect;
        for(i=0;i<n;i++)
            cin>>arr[i];
        for(i=0;i<n;i++)
        {
            d=k/arr[i];
          //  cout<<d<<" ";
            if(d==int(d))
                vect.push_back(make_pair(arr[i],d));
        }
        sort(vect.begin(), vect.end(), sortbysec);
        if(vect.size()==0)
          cout<<"-1"<<endl;
          else
             cout<<vect[0].first<<endl;
        arr.clear();
        vect.clear();
    }
}
