#include<bits/stdc++.h>
using namespace std;
struct TreeHeight
{
    int feets;
    int inches;
};
int main()
{
    int n;
    cin>>n;
   struct TreeHeight trees[n];
   for(int i=0;i<n;i++)
   {
       cin>>trees[i].feets;
       cin>>trees[i].inches;
   }
   int ans=0,result;
vector<int> newHeight;
for(int i=0;i<n;i++)
{
    ans=(trees[i].feets*12)+trees[i].inches;
    newHeight.push_back(ans);
    ans=0;
}
 result=newHeight[0];
 for (int i = 1; i < newHeight.size(); ++i) {
        if (result < newHeight[i])
            result = newHeight[i];
    }

 //return result;

 cout<<result;
}
