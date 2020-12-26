#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] ={2,5,1,11,7};
    int a=0;
    for(int i=0;i<5;i++)
    {
        if(a>arr[i+1])
        {
            a=arr[i+1];
        }
    }
     cout<<a;
}
