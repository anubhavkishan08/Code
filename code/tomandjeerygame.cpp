#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ts=0,js=0,i,t,c=0;
    cin>>t;
    while(t--){
    vector<int> num;
    cin>>ts;
    while(ts%2==0)
    {
        ts=ts/2;
    }
    if(ts%2!=0)
    {
            for(i=1;i<ts;i++)
            {
                if(i%2!=0){
                num.push_back(i);
            }
    }
    cout<<num.size()<<"\n";
      num.clear();
    }
}
}
