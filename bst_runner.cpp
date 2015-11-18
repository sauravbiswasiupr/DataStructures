#include <iostream>
#include "./includes/bst.h"

using namespace std;

int main() {
	TreeNode* root = NULL;
	cout<<"Inserting some values into the binary tree";
	root = insert(root, 3);
	root = insert(root, 2);
	root = insert(root, 1);
	root = insert(root, 4);

	cout<<"Printing the nodes in inorder"<<endl;
	inorder(root);
	cout<<"Freeing heap memory that was allocated to avoid memory leaks"<<endl;
	freeMemory(root);

	return 0;
};