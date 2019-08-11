/*
	Created by shubhgkr on 11/08/19.
	https://www.codechef.com/problems/ICL1902
*/
#include <iostream>
#include <cmath>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		int c = 0;
		while (n != 0) {
			c++;
			int root = std::floor(std::sqrt(n));
			n -= (root * root);
		}
		std::cout << c << "\n";
	}
	return 0;
}