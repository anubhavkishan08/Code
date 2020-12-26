#include<bits/stdc++.h>
using namespace std;

class Node
{
    public :
     int data;
     Node *next;
     Node(int x)
     {
         data=x;
        next=NULL;
     }
};
int nthfromlast(Node *head,int n)
{
     int c=0;
    while(head!=NULL)
    {
         c++;
        head=head->next;
    }
    Node *curr=head;
    for(int i=1;i<c-n+1;i++)
    {
        curr=curr->next;
    }
    return curr->data;
}
void printlist(Node *head)
{
    int c=0;
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        c++;
        head=head->next;

    }
    cout<<endl<<"LENGTH OF LIST"<<"=";
    cout<<c;
}

int main()
{
 Node *head=new Node(10);
 Node *head1=new Node(20);
 Node *head2=new Node(30);
 head->next=head1;
 head1->next=head2;

// printlist(head);
cout<<nthfromlast(head,2);
}
