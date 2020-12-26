
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num=1;
    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<n+1; j++)
        {
            cout<<num;
        }
        num++;
        cout<<endl;

    }
    cout << "and he said \"Hello\"";
}
