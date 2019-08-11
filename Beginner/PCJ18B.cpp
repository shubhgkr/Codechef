/*
	Created by shubhgkr on 12/08/19.
	https://www.codechef.com/problems/PCJ18B
*/

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		int temp = (n + (n & 1)) >> 1;
		if (n & 1)
			std::cout << ((temp * (2 * temp + 1) * (2 * temp - 1)) / 3) << "\n";
		else
			std::cout << ((2 * temp * (temp + 1) * (2 * temp + 1)) / 3) << "\n";
	}
	return 0;
}