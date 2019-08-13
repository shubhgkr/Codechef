/*
    Created by shubhgkr on 13/8/19.
    https://www.codechef.com/problems/MUFFINS3
*/
#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	int x;
	while (t--) {
		std::cin >> x;
		std::cout << (x >> 1) + 1 << "\n";
	}
	return 0;
}