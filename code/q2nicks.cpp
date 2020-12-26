#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    int i;
    for( i=2;i*i<=n;i++)
    {
        if(n%i==0)
           return false;
    }
    return true;
}
map<int,string> mp;
int main()
{
    mp.insert({1,"a"});mp.insert({2,"bc"});mp.insert({3,"cde"});mp.insert({4,"defg"});mp.insert({5,"efghi"});
    mp.insert({6,"fghijk"});mp.insert({7,"ghijklm"});mp.insert({8,"hijklmno"});mp.insert({9,"ijklmnopq"});
    int sv,ev,i;
    cin>>sv>>ev;
    for(i=sv;i<=ev;i++)
    {
        if(isPrime(i))
          cout<<i<<" ";
          for(auto it:mp)
          {
              if(i%10==it.first)
                cout<<it.second<<" ";
                i=i/10;
          }
    }
}