#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s1;
    stack<int> s2;
    stack<int> s3;
    int n1,n2,n3,k,j,l;
    cin>>n1>>n2>>n3;
    for(int i=0;i<n1;i++)
    {
        cin>>j;
        s1.push(j);
    }
        for(int i=0;i<n2;i++)
        {
            cin>>l;
            s2.push(l);
        }
        for(int i=0;i<n3;i++)
        {
            cin>>k;
            s3.push(k);
        }
        int sum1=0,sum2=0,sum3=0;
        int a,b,c;
        while(s1.size()>0 )
        {
            a=s1.top();
            sum1=sum1+s1.top();
              s1.pop();
        }
         while(s2.size()>0)
        {
            b=s2.top();
            sum2=sum2+s2.top();
               s2.pop();
        }
         while(s3.size()>0)
        {
            c=s3.top();
            sum3=sum3+s3.top();
                 s3.pop();
        }
    while(sum1!=sum2 ||sum2!=sum3 ||sum1!=sum3)
        {
            if(sum1>sum2 && sum1>sum3|| sum1==sum2 && sum1>sum3 || sum1==sum3 && sum1>sum2)
                 sum1=sum1-a;
            else if(sum2>sum1 && sum2>sum3|| sum2==sum1 && sum2>sum3 || sum2==sum3 && sum2>sum1)
                 sum2=sum2-b;
            else if(sum3>sum1 &&sum3>sum2 || sum3==sum2 && sum3>sum1 || sum3==sum1 && sum3>sum2)
                 sum3=sum3-c;
        }
        cout<<sum3;
}
