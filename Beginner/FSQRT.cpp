/*
	Created by shubhgkr on 11/08/19.
	https://www.codechef.com/problems/FSQRT
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
		std::cout << floor(std::sqrt(n)) << "\n";
	}
	return 0;
}