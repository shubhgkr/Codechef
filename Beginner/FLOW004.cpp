/*
	Created by shubhgkr on 12/08/19.
	https://www.codechef.com/problems/FLOW004
*/

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t = 0;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		int s = (n % 10);
		while (n >= 10)
			n /= 10;
		s += n;
		std::cout << s << "\n";
	}
	return 0;
}