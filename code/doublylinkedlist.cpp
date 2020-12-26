#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int d)
    {
        data=d;
        prev=NULL;
        next=NULL;
    }
};

Node* insertatbeg(Node *head,int x)
{
    Node *temp=new Node(x);
   temp->next=head;
   if(head!=NULL){
     head->prev=temp;
     }
    return temp;
}
void printList(Node *head)
{
 if(head==NULL)
    return ;
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{
    Node *head=new Node(5);
    Node *head1=new Node(15);
    Node *head2=new Node(25);
    head->next=head1;
    head1->next=head2;
    head1->prev=head;
    head2->prev=head1;
     printList(head);
    insertatbeg(head,2);
    printList(head);
}
