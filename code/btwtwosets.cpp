#include<bits/stdc++.h>
#include<iostream>
#include <vector>
using namespace std;
int main()
{
    int m,n;
    int flag=1;
    cin>>m>>n;
    vector<int> a(m);
    vector<int> b(n);
    for(int i=0;i<m;i++)
        cin>>a[i];
    for(int j=0;j<n;j++)
        cin>>b[j];
        int c=0;
    for (int k=1; k<=100; k++)
    {
        int flag = 1;
        for (int i=0; i<m; i++)
            if (k % a[i] != 0)
                flag = 0;
        for (int i=0; i<n; i++)
            if (b[i] % k != 0)
                flag = 0;
        if (flag == 1)
            c=c+1;
    }
    cout<<c;
}
