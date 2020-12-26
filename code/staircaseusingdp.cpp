#include<bits/stdc++.h>///staircase problem
using namespace std;
int main()
{
    long long int n,k;
    cin>>n;
//int ways[n+1];
    vector<long long int> ways(n+1);
    ways[0]=1;
    ways[1]=1;
    for(int i=2;i<=n;i++)
        ways[i]=ways[i-1]+ways[i-2];

    cout<<ways[n]<<endl;

}
//memory efficient approach
 /*int climbStairs(int n) {
        int a=1,b=1,c,i;
        if(n==1)
            return 1;
        for(i=2;i<=n;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
       return c ;
    }*/
