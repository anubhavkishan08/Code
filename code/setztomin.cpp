#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,z;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(auto it:arr)
        sum+=it;

    z=sum/arr.size();

    int newsum=z*arr.size();
    if(newsum=sum)
        cout<<z<<endl;
    else
        cout<<z+1<<endl;

}
