#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     map<int,pair<char,char>>mp;
     map<int,pair<char,char>>::iterator it;
     mp.insert(pair<int,pair<char,char>>(1,make_pair('A','a')));
      mp.insert(pair<int,pair<char,char>>(2,make_pair('B','b')));
       mp.insert(pair<int,pair<char,char>>(3,make_pair('C','c')));
       mp.insert(pair<int,pair<char,char>>(4,make_pair('D','d')));
       mp.insert(pair<int,pair<char,char>>(5,make_pair('E','e')));
        mp.insert(pair<int,pair<char,char>>(6,make_pair('F','f')));
        mp.insert(pair<int,pair<char,char>>(7,make_pair('G','g')));
        mp.insert(pair<int,pair<char,char>>(8,make_pair('H','h')));
        mp.insert(pair<int,pair<char,char>>(9,make_pair('I','i')));
        mp.insert(pair<int,pair<char,char>>(10,make_pair('J','j')));
        mp.insert(pair<int,pair<char,char>>(11,make_pair('K','k')));
        mp.insert(pair<int,pair<char,char>>(12,make_pair('L','l')));
        mp.insert(pair<int,pair<char,char>>(13,make_pair('M','m')));
        mp.insert(pair<int,pair<char,char>>(14,make_pair('N','n')));
        mp.insert(pair<int,pair<char,char>>(15,make_pair('O','o')));
        mp.insert(pair<int,pair<char,char>>(16,make_pair('P','p')));
        mp.insert(pair<int,pair<char,char>>(17,make_pair('Q','q')));
        mp.insert(pair<int,pair<char,char>>(18,make_pair('R','r')));
        mp.insert(pair<int,pair<char,char>>(19,make_pair('S','s')));
        mp.insert(pair<int,pair<char,char>>(20,make_pair('T','t')));
        mp.insert(pair<int,pair<char,char>>(21,make_pair('U','u')));
        mp.insert(pair<int,pair<char,char>>(22,make_pair('V','v')));
        mp.insert(pair<int,pair<char,char>>(23,make_pair('W','w')));
        mp.insert(pair<int,pair<char,char>>(24,make_pair('X','x')));
        mp.insert(pair<int,pair<char,char>>(25,make_pair('Y','y')));
        mp.insert(pair<int,pair<char,char>>(26,make_pair('Z','z')));
       // mp.insert(pair<char,pair<char,char>>('$',make_pair('\t','\t')));
        char s[200];
        int i;
          for(i=0;i<200;i++){
           cin>>s[i];
        for (auto it:mp){
            if(it.second.first==s[i] || it.second.second==s[i] || s[i]=='\t')
             cout<<it.first;
          }
        }
    }
}
