#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,j,flag,temp;
    vector<int> a;
    cin>>n;
    for(i=2;i<=n;i++)
    {
        if (i == 1 || i == 0)
            continue;
       flag=1;
         for (j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
         }
           if (flag == 1)
             a.push_back(i);
    }
    sort(a.begin(),a.end());

    /* for (j = 1; j <= n; j++) {
        for (i = 0; i < n-1; i++) {
            temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
	}
 }*/
   for(auto it: a)
    cout<<it<<" ";
}
