#include<bits/stdc++.h>
using namespace std;
int sum(vector <int> arr)
{
    int sum1=0;
    for(int i=0;i<arr.size();i++)
    {
        sum1=sum1+arr[i];
    }
    return sum1;
}
int main()
{
    int t,n,i,temp=0,c=0,flag=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            cin>>b[i];
sort(a.begin(),a.end());
sort(b.begin(),b.end());
 if(sum(a)!= sum(b) && n<2){
        cout<<"-1"<<endl;
 else{
        for(i=0;i<n;i++)
        {
                temp=a[i];
                a[i]=b[i];
                b[i]=temp;
                   c++;
                if(sum(a)==sum(b))
                     flag=1;
                else
                    flag=0;
            }
   }
 }
                cout<<"0"<<endl;
                if(flag=1)
                    cout<<"-1"<<endl;
                else
                    cout<<c<<endl;

    }
}

