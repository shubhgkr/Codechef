//
// Created by shubhgkr on 19/08/19.
//

#include <iostream>
#include <queue>

struct Node {
	int data;
	Node *left;
	Node *right;
};

Node *createNode(int data) {
	Node *newNode = new Node();
	newNode->data = data;
	return newNode;
}

Node *insertNewNode(Node *node, int data) {
	if (node == nullptr) {
		node = createNode(data);
	} else if (data <= node->data) {
		node->left = insertNewNode(node->left, data);
	} else {
		node->right = insertNewNode(node->right, data);
	}
	return node;
}

bool search(Node *node, int data) {
	if (node == nullptr)
		return false;
	if (node->data == data)
		return true;
	if (data < node->data)
		return search(node->left, data);
	return search(node->right, data);
}

int height(Node *node) {
	if (node == nullptr)
		return 0;
	return std::max(height(node->left) + 1, height(node->right) + 1);
}

void preOrderTraversal(Node *node) {
	if (node == nullptr)
		return;
	std::cout << node->data << "\n";
	preOrderTraversal(node->left);
	preOrderTraversal(node->right);
}

void inOrderTraversal(Node *node) {
	if (node == nullptr)
		return;
	inOrderTraversal(node->left);
	std::cout << node->data << "\n";
	inOrderTraversal(node->right);
}

void postOrderTraversal(Node *node) {
	if (node == nullptr)
		return;
	postOrderTraversal(node->left);
	postOrderTraversal(node->right);
	std::cout << node->data << "\n";
}

void BFS(Node *node) {
	if (node == nullptr)
		return;
	std::queue<Node *> q;
	q.push(node);
	while (!q.empty()) {
		Node *current = q.front();
		std::cout << current->data << " ";
		if (current->left != nullptr)
			q.push(current->left);
		if (current->right != nullptr)
			q.push(current->right);
		q.pop();
	}
}

int main() {
	int arr[] = {15, 20, 25, 10, 8, 12, 18};
	Node *root = nullptr;
	for (int v:arr)
		root = insertNewNode(root, v);
	std::cout << "preorder traversal of the tree is:\n";
	inOrderTraversal(root);
	std::cout << "inorder traversal of the tree is:\n";
	postOrderTraversal(root);
	std::cout << "postorder traversal of the tree is:\n";
	postOrderTraversal(root);
	std::cout << "level order traversal of the tree is:\n";
	BFS(root);
	return 0;
}