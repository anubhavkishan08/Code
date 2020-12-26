#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S,s1,s2,s3;
    cin>>S;
     vector<string> arr;
    int b=S.size();
    int c=0;
    for(int i=0;i<b;i++)
    {
        if(S[i]>='0' && S[i]<='9'){
            s1=s1+S[i];
            c++;}
         if(c==2){
          arr.push_back(s1);
          s1.clear();
          c=0;
          //cout<<s1<<endl;
         }
    }
   // sort(arr.begin(),arr.end(),greater<int>());
     sort(arr.begin(), arr.end());
    cout<<arr[arr.size()-1];
   // for(auto it:arr)
     //   cout<<it<<" ";
}
