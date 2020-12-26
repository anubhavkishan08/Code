#include<bits/stdc++.h>
using namespace std;
int main()
{
    int input1;
    cin>>input1;
    vector<int> input2(input1);
    for(int i=0;i<input1;i++)
    {
        cin>>input2[i];
    }
    int oddsum=0,evensum=0;
    for(int i=0;i<input1;i++)
    {
        if(input2[i]%2!=0)
          oddsum+=input2[i];
        else
        {
            evensum+=input2[i];
        }
    }
        int ans=0;
        cout<<oddsum<<" "<<evensum;
         ans=oddsum-evensum;
        cout<<ans;


}
