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
Node* reverselist(Node* head)
{
    Node* curr=head;
    Node* prev=NULL;
    Node* next=NULL;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
Node* reverselist1(Node* head)
{
    vector<int> arr;
    Node* curr=head;
     for(Node* curr=head;curr!=NULL;curr=curr->next)
    {
        arr.push_back(curr->data);
    }
    for(Node* curr=head;curr!=NULL;curr=curr->next)
    {
        curr->data=arr.back();
        arr.pop_back();
    }
    return head;
}
void printList(Node *head)//traversing the list
{
    Node* curr=head;
     while (curr != NULL) {
		cout << curr->data << "-> ";
		curr = curr->next;
	}
	cout<<endl;
}
int main()
{
     Node *head=new Node(10);
    Node *head1=new Node(20);
    Node *head2=new Node(30);
    head->next=head1;
    head1->next=head2;
    printList(head);
    reverselist(head);
    printList(head);
}
