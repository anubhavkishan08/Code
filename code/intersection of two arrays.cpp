
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,c=0;
    cin>>n>>m;
    vector<int> nums1(n);
    vector<int> nums2(m);
    for(i=0;i<n;i++)
    {
        cin>>nums1[i];
    }
      for(i=0;i<m;i++)
    {
        cin>>nums2[i];
    }
      vector<int> v3;
         map<int,int> m1;
        map<int,int> m2;
        for(int i=0;i<nums1.size();i++)
        {
            m1[nums1[i]]++;
        }
         for(int i=0;i<nums2.size();i++)
        {
            m2[nums2[i]]++;
        }
        for(auto it:m1)
        {
            for(auto it1:m2)
            {
                if(it.first==it1.first){
                     c=min(it.second,it1.second);
                    while(c--)
                    {
                        v3.push_back(it.first);
                    }
                }
            }
        }
 //cout<<c;
        for(auto it:v3)
          cout<<it<<" ";
}
