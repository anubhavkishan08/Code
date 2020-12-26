#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int stacks[20];
int top=0;

void push(int a)
{
    if(top==20){
        cout<<"stack full";
         return;
}
    else{
        stacks[top]=a;
         top++;
    }
}
void pop()
{
    if(top==0)
    {
        cout<<"stack empty";
    }
    else
    {
        stacks[top]=-1;
        top--;
    }
}
int topElement ( )
{
    return stacks[top-1];
}

int main() {
    int n,i;
    cin>>n;

     for(i=0;i<n;i++)
    {
        int type;
        cin>>type;
        if(type==1){
             int x;
             cin>>x;
             push(x);
        }
        else if(type==2)
        {
            pop();
        }
        else if(type==3)
           {
             cout<<topElement()<<endl;
           }
   }

    return 0;
}
