#include <iostream>
#include "linkedlist.h"

using namespace std;

int main() {
	int values[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	Node* root = createList(values, 10);
	cout<<"The created list is: "<<endl;
	printList(root);

	cout<<"List in reverse: "<<endl;
	printReverse(root);
	cout<<"NULL"<<endl;

	cout<<"root->data: "<<root->data<<endl;
	freeMemory(root);
	return 0;
};