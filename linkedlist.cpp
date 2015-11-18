#include <iostream>
#include "linkedlist.h"

using namespace std;

Node* insertAtHead(Node* head, int data) {
	Node* node = new Node();
	node->data = data;

	if (head == NULL)
		return node;

	node->next = head;
	return node;
};

Node* createList(int* data, int size) {
   Node* root = NULL;

   for (int i = size-1; i >= 0; i--) {
   	root = insertAtHead(root, data[i]);
   }

   return root;
};

void printList(Node* head) {
	while (head != NULL) {
		cout<<head->data<<"->";
		head = head->next;
    }
    cout<<"NULL"<<endl;

	return;
};

void printReverse(Node* head) {
	if (head == NULL)
		return;

	printReverse(head->next);
	cout<<head->data<<"->";
};

void freeMemory(Node* head) {
	Node* prev = NULL;
	Node* current = head;

	while (current != NULL) {
		prev = current;
		current = current->next;
		delete prev;
	}

	return;
};