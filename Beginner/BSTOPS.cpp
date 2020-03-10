/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 10/03/20.
 * Problem link: https://www.codechef.com/problems/BSTOPS
 */

#include <iostream>

struct Node {
	int val;
	int pos;
	Node *leftNode;
	Node *rightNode;
};

Node *Insert(Node *root, int val, int pos) {
	if (!root) {
		std::cout << pos << "\n";
		Node *n = new Node();
		n->val = val;
		n->pos = pos;
		return n;
	}
	if (val < root->val) {
		root->leftNode = Insert(root->leftNode, val, pos * 2);
	} else if (val > root->val) {
		root->rightNode = Insert(root->rightNode, val, pos * 2 + 1);
	}
	return root;
}

Node *Delete(Node *root, int val) {
	if (!root)
		return root;
	if (val < root->val)
		root->leftNode = Delete(root->leftNode, val);
	else if (val > root->val)
		root->rightNode = Delete(root->rightNode, val);
	else {
		std::cout << root->pos << "\n";
		if (!root->leftNode) {
			Node *temp = root->rightNode;
			delete root;
			return temp;
		} else if (!root->rightNode) {
			Node *temp = root->leftNode;
			delete root;
			return temp;
		} else {
			Node *temp = root->rightNode;
			while (temp->leftNode) {
				temp = temp->leftNode;
			}
			root->val = temp->val;
			root->rightNode = Delete(root->rightNode, root->val);
		}
	}
	return root;
}

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	Node *root = nullptr;
	int t;
	std::cin >> t;
	while (t--) {
		char c;
		int a;
		std::cin >> c >> a;
		if (c == 'i') {
			root = Insert(root, a, 1);
		} else {
			root = Delete(root, a);
		}
	}
	return 0;
}
