#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,num,a,left=1, right=22;
        vector<int> ans;
        for(i=left;i<=right;i++)
        {
            num=i;
            while(num!=0)
            {
                a=num%10;
                if(a!=0)
                {
                    if(num%a==0)
                        ans.push_back(num);
                }
            }

        }
        for(auto it: ans)
            cout<<it<<" ";
}
