/*
	Created by shubhgkr on 11/08/19.
	https://www.codechef.com/problems/PPSUM
*/
#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int d;
		int n;
		std::cin >> d >> n;
		while (d--)
			n = (n * (n + 1)) >> 1;
		std::cout << n << "\n";
	}
	return 0;
}