#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A;
    cin>>A;
    int b=0;
    int num=0,i;
    vector<int> arr;
    int d;
    d=A;
    while(A>0)
    {
        b=A%10;
        arr.push_back(b);
        A=A/10;
    }
    int n=arr.size();
    for(i=0;i<=(n-1)/2;i++)
    {
        if(arr[i]==arr[n-1-i])
            num=1;
        else{
            num=0;
            break;
        }
    }
    if(num==1 || n==1)
        cout<<"YES";
     else if(d==0)
        cout<<"YES";
    else
        cout<<"NO";
}
