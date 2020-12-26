#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,temp;
    vector<int> inputList(5);
    for( i=0;i<5;i++)
        cin>>inputList[i];

  for(i=0;i<inputList.size()/2;i++)
{
temp=inputList[inputList.size()-i-1];
inputList[inputList.size()-i-1]=inputList[(inputList.size()/2)+i];
inputList[(inputList.size()/2)+i]=temp;
}
for(auto it :inputList)
    cout<<it<<" ";
}
