#ifndef BST_H
#define BST_H

struct TreeNode {
	int data;
	TreeNode* left;
	TreeNode* right;
};

TreeNode* createNode(int data);
TreeNode* insert(TreeNode* root, int data);
void inorder(TreeNode* root);
void freeMemory(TreeNode* root);
#endif