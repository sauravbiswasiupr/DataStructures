#include<iostream>

struct node {
	int data;
	struct node* left;
	struct node* right;
};

struct node* newNode(int data) {
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return (node);
}

void mirrorTree(struct node* node) {
	if (node == NULL)
		return;
	else {
		struct node* temp;
		mirrorTree(node->left);
		mirrorTree(node->right);

		temp = node->left;
		node->left = node->right;
		node->right = temp;
	}
}

void inorder(struct node* node) {
	if (node == NULL)
		return;

	inorder(node->left);
	std::cout<<node->data<<"\t";
	inorder(node->right);
}

int main() {
	struct node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	std::cout<<"Initial inorder: "<<std::endl;
	inorder(root);

	std::cout<<"Mirror the tree"<<std::endl;
	mirrorTree(root);
	std::cout<<"Inorder after mirroring"<<std::endl;

	inorder(root);
	return 0;
}