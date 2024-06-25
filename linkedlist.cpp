#include <iostream>
using namespace std;


struct Node {
	int data;
	Node* next;
};

void printList(Node* n)
{
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}

void push2(Node** head_ref, int new_data)
{
//	cout<<head_ref<<endl;
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = *head_ref;
	*head_ref = new_node;
}
void insertAfter(Node** prev_node, int new_data)
{
	if (*prev_node == NULL) {
		cout << "The given previous node cannot be NULL";
		return;
	}

	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = (*prev_node)->next;
	(*prev_node)->next = new_node;
}

int main() {
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
//	cout<<head<<endl;
//	cout<<head->data<<endl;
//	cout<<head->next<<endl;
//	cout<<"goi ham"<<endl;
	push2(&head, 5);
	insertAfter(&second,10);
	printList(head);

}


