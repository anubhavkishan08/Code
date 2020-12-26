#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,diff=0;
    cin>>n;
    vector<int> realeseTimes(n);
    multimap<char,int> mp;
    for(int i=0;i<n;i++)
    cin>>realeseTimes[i];
    string keysPressed;
    cin>>keysPressed;
     mp.insert({keysPressed[0],realeseTimes[0]});
    for(int i=0;i<keysPressed.size()-1;i++)
    {
        diff=realeseTimes[i+1]-realeseTimes[i];
        mp.insert({keysPressed[i+1],diff});
        diff=0;
    }
   unsigned currentMax = 0;
    string s1;
for(auto it = mp.cbegin(); it != mp.cend(); ++it ) {
    if (it ->second > currentMax) {
        currentMax = it->second;
    }
}
for(auto it1 = mp.cbegin(); it1 != mp.cend(); ++it1)
{
    if(it1 ->second==currentMax)
       s1.push_back(it1->first);
}
  cout<<s1[s1.size()-1];
}
