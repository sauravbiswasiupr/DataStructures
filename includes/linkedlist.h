#ifndef LINKEDLIST_H
#define LINKEDLIST_H

/*
struct Node {
	int data;
	Node* next;
}; 

// helper functions 
Node* insertAtHead(Node* head, int data);
//Node* delete(Node* head, int data);
Node* createList(int* arr, int size);
void printList(Node* head);
void printReverse(Node* head);
*/

class Node {
  public: 
  	int data;
  	Node* next;
};

Node* insertAtHead(Node* head, int data);
//Node* delete(Node* head, int data);
Node* createList(int* arr, int size);
void printList(Node* head);
void printReverse(Node* head);
void freeMemory(Node* head);

#endif