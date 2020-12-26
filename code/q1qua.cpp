#include<bits/stdc++.h>
using namespace std;
int main()
{
    int input2,n;
    string input1;
    cin>>input1;
    cin>>input2;
    while(input2--)
    {
        for(int i=0;i<input1.size()-1;i++){
        if(input1[i]<input1[i+1])
          swap(input1[i],input1[i+1]);
           i=0;
        }
    }
    cout<<input1;
}