#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;

	Node(int x)
	{
	    data=x;
	    next=NULL;
	}
};
void printList(Node *head)//traversing the list
{
     while (head != NULL) {
		cout << head->data << "-> ";
		head = head->next;
	}
}
void rprintList(Node *head) //PRINT USING RECURSION
{
    if(head==NULL)
        return;
    cout<<head->data<<"->";
    rprintList(head->next);
}
int searchkey(Node *head, int x)
{
    int pos=1;
    while (head != NULL) {
		if(head->data==x)
            return pos;
        else{
		  head = head->next;
		  pos++;
		}
	}
 return -1;
}
int rsearchkey(Node *head,int key)//RECURSIVE solution
{
    if(head==NULL)
        return -1;
    if(head->data==key)
        return 1;
    else
    {
        int res=rsearchkey(head->next,key);
        if(res==-1)
            return -1;
        else
            return (res+1);
    }

}
Node* insertnodeatbeg(Node *head,int x)
{
    Node *temp=new Node(x);
    temp->next=head;
    return temp;

}
Node* insertnodeatend(Node *head,int x)
{
    Node *temp=new Node(x);
    if(head==NULL)
        return temp;
    while(head->next!=NULL)
    {
       head=head->next;
    }
    head->next=temp;
    return head;
}
Node *deletehead(Node*head)
{
    if(head==NULL)
        return NULL;
      Node* temp = head->next;
    delete(head);
    return temp;
}
Node *deletelast(Node *head)
{
    if(head==NULL)
        return NULL;
    if(head->next==NULL){
        delete(head);
        return NULL;
    }
    while(head->next->next!=NULL)
    {
        head=head->next;
    }
    delete(head->next);
    head->next=NULL;
    return head;
}
Node *insertatanypos(Node *head,int pos,int data)
{
    Node *temp=new Node(data);
    if(pos==1)
    {
        temp->next=head;
        return temp;
    }
    Node *curr=head;
    for(int i=1;i<=pos-2 && curr!=NULL;i++)
    {
        curr=curr->next;
    }
    if(curr==NULL)
        return head;
    temp->next=curr->next;
    curr->next=temp;
    return head;
}
int main()
{
    Node *head=new Node(10);
    Node *head1=new Node(20);
    Node *head2=new Node(30);
    head->next=head1;
    head1->next=head2;
   head= insertnodeatbeg(head,5);
   // head=insertnodeatend(head,40);
    printList(head);
  //deletehead(head);
  //deletelast(head);
  //insertatanypos(head,2,25);
 // printList(head);
  // rprintList(head);
 // cout<<rsearchkey(head,20);


}
