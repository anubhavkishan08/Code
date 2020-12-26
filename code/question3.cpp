#include<iostream>
using namespace std;
int main()
{
    int i,j,m,n,ab[10][10],sum=0;
    cout<<"enter no. of rows\n:";
    cin>>m;
    cout<<"enter no. of columns\n:";
    cin>>n;
    for(i=0;i<m;i++)
    {


        for(j=0;j<n;j++)
        {
            cin>>ab[i][j];
        }

}
for(i=0;i<m;i++)
    {


        for(j=0;j<n;j++)
        {
            if(i==j)
                sum=sum+ab[i][j];
        }

}
cout<<"sum of diagonal"<<sum;
return 0;
}
