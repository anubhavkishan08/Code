#include <bits/stdc++.h>
using namespace std;

set<char> str;
int main()
{
    int t,n,i,c=0,flag=0;
            cin>>n;
        vector<char> s(n);
        for(i=0;i<n;i++)
        {
            cin>>s[i];
            str.insert(s[i]);
        }
        auto it=str.begin();
        while(it!=str.end())
        {
            for(i=0;i<s.size();i++)
            {
                if(*it==s[i])
                    c++;
            }
            cout<<*it<<" "<<c<<endl;
            it++;

            c=0;

    }

}
