#include<bits/stdc++.h>
#include<iostream>
#include <vector>
using namespace std;
int main()
{
    int n,a=0;
    int b=0,l=0,h=0;
    cin>>n;
    vector<int> scores(n);
    for(int i=0;i<n;i++)
        cin>>scores[i];
    for(int i=0;i<scores.size();i++){
             a=scores[i];
             b=a;
            //cout<<a<<b;
            break;
    }
     for(int i=1;i<scores.size();i++){
            if(a<scores[i]){
                a=scores[i];
              //cout<<a<<" ";
                 l=l+1;
}
            else if(b>scores[i]){
                      b=scores[i];
                   //   cout<<b<<" ";
                h=h+1;
                }

     }
      cout<<l<<" "<<h;
}
