#include<bits/stdc++.h>
using namespace std;
int mincost(vector<vector<int>>input,int sx,int sy,int ex,int ey)
{
    if(sx==ex && sy==ey)
        return input[ex][ey];
    if(sx>ex || sy>ey)
        return INT_MAX;

    int op1=mincost(input,sx+1,sy,ex,ey);
    int op2=mincost(input,sx+1,sy+1,ex,ey);
    int op3=mincost(input,sx,sy+1,ex,ey);

    int ans=min(op1,min(op2,op3));
    return ans+input[sx][sy];
}
int main()
{
    int n,m,i,j,sx,sy,ex,ey;
    cin>>n>>m;
    vector<vector<int> > arr( n , vector<int> (m));
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

        for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++){
            cout<< arr[i][j]<< " ";
        }
        cout<< "\n";
    }
    cin>>sx>>sy>>ex>>ey;
    cout<<mincost(arr,sx,sy,ex,ey);
}
