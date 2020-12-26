#include<bits/stdc++.h>
using namespace std;
int counts(int n)
{
    if(n==1 || n==2)
        return n;

  return counts(n-1)+counts(n-2);
}
int main()
{
 int n;
 cin>>n;
    cout<<counts(n);

}
