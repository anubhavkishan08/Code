#include<bits/stdc++.h>
using namespace std;
int main()
{
long int n,i,t,a,m;
cin >> n;
stack < string > s;
string k="";
s.push(k);
string x;
while(n!=0)
{
cin >> t;
if(t==1)
{
cin >> x;
k=k+x;
s.push(k);
}
else if(t==2|| t==3 )
{
m=k.size();
cin >> a;
if(t==2&&m!=0)
{
k = k.erase(m-a,m);
s.push(k);
//cout << k.size() << k;
}
else
cout << k[a-1] << endl ;
}
else if(t==4 )
{
s.pop();
k=s.top();
}
n--;
}
return 0;
}
