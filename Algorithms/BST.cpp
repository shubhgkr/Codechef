//
// Created by shubhgkr on 19/08/19.
//

#include <iostream>

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

int main() {
	int arr[] = {15, 20, 25, 10, 8, 12, 18};
	Node *root = nullptr;
	for (int v:arr)
		root = insertNewNode(root, v);
	std::cout << search(root, 55);
	return 0;
}