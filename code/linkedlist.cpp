#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};
///INSERTION IN LINKED LIST
void insert_first(Node *i,int value)
{
 	Node* temp=new Node();
	temp->data=value;
	temp->next= i;
	 i=temp;
}

void insert_last(Node *j,int value)
{
    Node *temp=new Node();
    temp->data = value;
    temp->next = NULL;
    j->next=temp;
    j=temp;
}
void insert_pos(Node *i,int pos, int value)
{
    Node *temp=new Node();
    Node *pre=new Node();
    Node *curr=new Node();
    curr=i;
    for(int i=0;i<pos;i++)
    {
        pre=curr;
        curr=curr->next;
    }
    temp->data=value;
    pre->next=temp;
    temp->next=curr;
}

void printList(Node* n)
{
	while (n != NULL) {
		cout << n->data << "-> ";
		n = n->next;
	}
	cout<<endl;
}

int main()
{
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;

	head = new Node();
	second = new Node();
	third = new Node();

	head->data = 1;
	head->next = second;

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;

	printList(head);
    insert_first(head,4);
    printList(head);
      insert_last(third,5);
      printList(head);
     insert_pos(head,2,8);
      printList(head);

Node* temp=new Node();
	temp->data=4;
	temp->next= head;
	 head=temp;
	 printList(head);
	return 0;
}
