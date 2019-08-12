/*
	Created by shubhgkr on 12/08/19.
	https://www.codechef.com/problems/TRISQ
*/

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	int b;
	while (t--) {
		std::cin >> b;
		int N = (b / 2) - 1;
		std::cout << ((N * (N + 1)) / 2) << "\n";
	}
	return 0;
}