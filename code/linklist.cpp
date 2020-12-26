#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};
void first(Node *i,int value)
{
 	Node* temp=new Node();
	temp->data=value;
	temp->next= i;
	 i=temp;
}
void printList(Node* n)
{
	while (n != NULL) {
		cout << n->data << "-> ";
		n = n->next;
	}
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
	  first(head,4);

}
