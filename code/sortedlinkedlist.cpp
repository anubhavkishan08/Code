#include<bits/stdc++.h>
using namespace std;

class Node
{
  public:
  int data;
  Node *next;
  Node(int x)
  {
      data=x;
      next=NULL;
  }
};
void printlist(Node *head)
{
    if(head==NULL)
        return;
while(head!=NULL){
    cout<<head->data<<"->";
    head=head->next;
  }
}

Node *sortedinsert(Node *head,int x)
{
    Node *temp=new Node(x);
    if(head==NULL)
        return temp;

    if(x<head->data)
    {
        temp->next=head;
        return temp;
    }
    Node *curr=head;
    while(curr->next!=NULL && curr->next->data< x){
       curr=curr->next;
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;
}
void printmiddle(Node *head)
{
    Node *slow=head;
    Node *fast=head;
    if(head==NULL)
        return ;
    while(fast->next!=NULL && fast!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->data<<" ";
}
int main()
{
    Node *head=new Node(10);
    Node *head1=new Node(20);
    Node *head2=new Node(30);
    Node *head3=new Node(40);
    Node *head4=new Node(50);
    head->next=head1;
    head1->next=head2;
    head2->next=head3;
    head3->next=head4;

   printlist(head);
 //  sortedinsert(head,15);
   //printlist(head);
   printmiddle(head);
}
