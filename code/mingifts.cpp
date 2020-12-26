#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,sum=0,i;
    cin>>t;
    while(t--){
    cin>>n;
    vector<int> arr(n);
    vector<int> a;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    a.push_back(1);
    int gift=1,sum=0;
    for(i=0;i<n-1;i++)
    {
        if(arr[i]<arr[i+1]){
            gift++;
        a.push_back(gift);}
        else{
            gift--;
        a.push_back(gift);}
    }
    for(auto it: a)
        sum+=it;

    cout<<sum<<endl;

  }
}
