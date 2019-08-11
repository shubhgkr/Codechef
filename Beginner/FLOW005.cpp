/*
	Created by shubhgkr on 11/08/19.
	https://www.codechef.com/problems/FLOW005
*/
#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	int denominations[6] = {100, 50, 10, 5, 2, 1};
	while (t--) {
		int n;
		std::cin >> n;
		int c = 0;
		for (int den:denominations) {
			c += n / den;
			n %= den;
		}
		std::cout << c << "\n";
	}
	return 0;
}