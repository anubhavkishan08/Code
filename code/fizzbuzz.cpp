#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    string s,c;
    vector<string> arr;
    vector<int> arr1;
    for(int i=1;i<=a;i++){
         s=to_string(i);
         arr.push_back(s);
         arr1.push_back(i);}

         for(int i=0;i<arr1.size();i++)
         {
           if(arr1[i]%3==0)
           {
                   arr[i]="Fizz";
           }
           if(arr1[i]%5==0)
           {
               arr[i]="Buzz";
           }
           if(arr1[i]%3==0 && arr1[i]%5==0)
           {
               arr[i]="FizzBuzz";
           }
         }
         for(int i=0;i<arr.size();i++)
            cout<<arr[i];
    //for(auto it: arr)
      //  cout<<it<<" ";
}
