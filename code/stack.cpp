#include<bits/stdc++.h>
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

int main()
{
    push(5);
    push(10);
    push(14);
    push(47);
    pop();
    pop();


    for(int i=0;i<top;i++)
        cout<<stacks[i]<<" ";

}
