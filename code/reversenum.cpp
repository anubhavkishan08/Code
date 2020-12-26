#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B;
    cin>>A;
    int num1=0;
    int num=0;
    int rem=0;

    B=abs(A);
   // cout<<B<<"\n";
    while(B>0)
    {
        rem=B%10;
     //   if(num > INT_MAX/10 || num == INT_MAX/10 && rem > INT_MAX%10)
       //     return 0;
        B=B/10;
        num=num*10+rem;
    }
    cout<<num;
    if(A<0){
    num1=num1-num;
    if(num1==A)
        cout<<"YES";
    }
    else if(A=0)
     cout<<"0";
    else
        {
            if(A>0){
            if(num==A)
                cout<<"YES";}
        }

}
