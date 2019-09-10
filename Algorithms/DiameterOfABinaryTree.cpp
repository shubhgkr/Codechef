/*
 * Created by shubhgkr on 10/09/19.
 * Diameter of a binary tree: https://www.geeksforgeeks.org/diameter-of-a-binary-tree/
 * Question: https://www.hackerearth.com/practice/data-structures/trees/binary-and-nary-trees/tutorial/
 */

#include <iostream>
#include <queue>

struct Node {
	Node *left;
	Node *right;
	int data;
};

Node *createNode(int data) {
	Node *node = new Node();
	node->data = data;
	return node;
}

Node *insertNewNode(Node *node, int data, std::string str) {
	if (node == nullptr)
		node = createNode(data);
	if (str.empty()) {
		node->data = data;
	} else {
		char ch = str[0];
		if (ch == 'L')
			node->left = insertNewNode(node->left, data, str.substr(1));
		else
			node->right = insertNewNode(node->right, data, str.substr(1));
	}
	return node;
}

int getHeight(Node *node) {
	if (node == nullptr)
		return 0;
	return 1 + std::max(getHeight(node->left), getHeight(node->right));
}

int getDiameter(Node *node) {
	if (node == nullptr)
		return 0;
	int lHeight = getHeight(node->left);
	int rHeight = getHeight(node->right);
	int lDiameter = getDiameter(node->left);
	int rDiameter = getDiameter(node->right);
	return std::max(lHeight + rHeight + 1, std::max(lDiameter, rDiameter));
}

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	Node *node = nullptr;
	int t;
	std::cin >> t;
	int data;
	std::cin >> data;
	node = insertNewNode(node, data, "");
	while (--t) {
		std::string str;
		std::cin >> str;
		std::cin >> data;
		insertNewNode(node, data, str);
	}
	std::cout << getDiameter(node);
	return 0;
}