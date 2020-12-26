#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,l,r,c=0;
    string s;
    vector<int> a;
     vector<int> b;
    cin>>s;
    cin>>l>>r;
    for(i=l;i<=r;i++)
    {
        if(s[i]=='1' && s[i+1]=='0'){
           a.push_back(i);
           }
    }
  //  for(auto it: a)
    //    cout<<it;

    if(a.size()==1)
        b.push_back(0);
    else{
        for(i=a[0];i<=a[1];i++)
        {
            if(s[i]=='0')
                c++;
        }
         b.push_back(c);
    }
    for(auto it: b)
        cout<<it;
}
