#include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
     cin>>n;
    vector<int> marks(n);
    vector<int> newmarks(n);
    vector<int> diff(n);
    vector<int> result(n);

    for(int i=0;i<n;i++)
    {
        cin>>marks[i];
    }
    for(int i=0;i<n;i++)
    //for(int i=0;i<n;i++)
    {
        newmarks[i]=marks[i]/5;
        newmarks[i]=5*(newmarks[i]+1);
        //cout<<newmarks[i]<<endl;
    //}
       //for(int j=0;j<n;j++)
     //{
         diff[i]=(newmarks[i]- marks[i]);
         //cout<<"after difference"<<diff[i];
     }

     for(int i=0;i<n;i++){
      if(marks[i]>=38){
         if(diff[i]<3){
             result[i]=newmarks[i];
             cout<<result[i]<<endl;
              }
         else{
              result[i]=marks[i];
               cout<<result[i]<<endl;
              }
            }
     else{
                result[i]=marks[i];
                cout<<result[i]<<endl;
     }
     }
}




