#include<bits/stdc++.h>
using namespace std;
vector<int> arr;
vector<int> arr1;
int main()
{
    int t,n,a,b,chef=0,monty=0,sum=0,sum1=0,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        while(n--)
        {
            cin>>a>>b;
            if(a>0)
            {
                while(a>0){
                c=a%10;
                a=a/10;
                arr.push_back(c);
            }
            }
            if(b>0)
            {
                 while(b>0){
                c=b%10;
                b=b/10;
                arr1.push_back(c);
                 }
            }
        for(int i=0;i<arr.size();i++)
        {
            sum=sum+arr[i];
        }
        for(int i=0;i<arr1.size();i++)
        {
            sum1=sum1+arr1[i];
        }
//cout<<sum<<" "<<sum1<<endl;
        if(sum>sum1)
        {
            chef++;
            arr.clear();arr1.clear();
            sum=0;sum1=0;
        }
        else if(sum<sum1)
        {
            monty++;
            arr1.clear();arr.clear();
            sum=0;sum1=0;
        }
        else{
            chef++;monty++;
            arr1.clear();arr.clear();
            sum=0;sum1=0;
        }
    }
   //cout<<chef<<" "<<monty<<endl;
   if(chef>monty)
        cout<<"0"<<" "<<chef<<endl;
    else if(chef == monty)
        cout<<"2"<<" "<<monty<<endl;
    else
        cout<<"1"<<" "<<monty<<endl;
    chef=0;monty=0;

 }
}
