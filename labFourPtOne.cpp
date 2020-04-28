#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

/* Link list node */
struct Node {
	int data;
	Node* next;



};

/* Function to reverse the linked list */
static void reverse(struct Node** head_ref)
{
	Node* current = *head_ref;
	Node* prev = NULL, *next = NULL;
	while(current != NULL){
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head_ref = prev;

}

/* Function to push a node */
void push(struct Node** head_ref, int new_data)
{
	Node* newNode = new Node();
	newNode->data = new_data;
	newNode->next = (*head_ref);
	(*head_ref) = newNode;








}

/* Function to print linked list */
void printList(struct Node* head)
{
	struct Node* temp = head;
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
}

/* Driver program to test above function*/
int main()
{
	/* Start with the empty list */
	struct Node* head = NULL;

	push(&head, 10);
	push(&head, 20);
	push(&head, 15);
	push(&head, 85);

	cout << "Forward list\n";
	printList(head);
	reverse(&head);
	cout << "\nReversed list \n";
	printList(head);
}
