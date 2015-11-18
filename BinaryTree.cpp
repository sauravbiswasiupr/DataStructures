// Simple implementation of a binary search tree in C++
// Function definitions. Will be compiled along with the main file
#include <iostream>
#include "./includes/bst.h"

using namespace std;

TreeNode* createNode(int data) {
	TreeNode* newNode = new TreeNode();
	newNode->data = data;
	newNode->left = newNode->right = NULL;

	return newNode;
};

TreeNode* insert(TreeNode* root, int data) {
	if (root == NULL) {
		root = createNode(data);
		return root;
	}

	else if (data < root->data)
		root->left = insert(root->left, data);

	else
		root->right = insert(root->right, data);

	return root;
};

void inorder(TreeNode* root) {
	if (root == NULL)
		return;

	inorder(root->left);
	cout<<root->data<<endl;
	inorder(root->right);
};

void freeMemory(TreeNode* root) {
	if (root == NULL)
		return;

	freeMemory(root->left);
	freeMemory(root->right);
	delete root;
};
