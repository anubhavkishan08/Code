#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b,n1;
    vector<char> a;
    string s;
    char c;
    cin>>n;
    n1=n;
    if(n1<=26){
        c=char(n+65-1);
        s.push_back(c);
    cout<<s;}
if(n1>26){
    while(n>0){
      b=n%26;
      if(b==0)
      {
          b=b+26;
      }
      n--;
    c=char(b+65-1);
    s.push_back(c);

    n=n/26;
}

reverse(s.begin(),s.end());
        cout<<s;
}
}
