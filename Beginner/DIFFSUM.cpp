/*
	Created by shubhgkr on 11/08/19.
	https://www.codechef.com/problems/DIFFSUM
*/
#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n1;
	int n2;
	std::cin >> n1 >> n2;
	if (n1 > n2)
		std::cout << n1 - n2;
	else
		std::cout << n1 + n2;
	return 0;
}