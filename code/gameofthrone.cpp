#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
  string s;
  cin >>  s;

  vector<int> v(256, 0);
  for(int i=0; i<s.size(); i++)
    v[s[i]]++;

  int impar =0;
  for(int i=0; i<256; i++)
    if(v[i]%2) impar++;

  if((s.size()%2 == 0 && impar == 0) || (s.size()%2==1 && impar == 1))
    puts("YES");
  else puts("NO");

}
