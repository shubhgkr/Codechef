/*
	Created by shubhgkr on 11/08/19.
	https://www.codechef.com/problems/ADASCOOL
*/
#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		int m;
		std::cin >> n >> m;
		if (n & 1 && m & 1)
			std::cout << "NO\n";
		else
			std::cout << "YES\n";
	}
	return 0;
}