#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int pairs, k;
 vector <int> array1;
 long long int count1 = 0,temp;
sort(array1.begin(),array1.end());

for(int i=0;i<array1.size();i++){
for(int j=i+1;j<array1.size();j++){
    if(array1[j]-array1[i]==k){
        count1++;
    }
    if((array1[j]-array1[i])>k){
        ++i;
        j = i;
        continue;
    }
     }
  }
  cout <<count1;
}


