/*
	Created by shubhgkr on 12/08/19.
	https://www.codechef.com/problems/FLOW008
*/

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t = 0;
	std::cin >> t;
	int n = 0;
	while (t--) {
		std::cin >> n;
		if (n < 10)
			std::cout << "What an obedient servant you are!\n";
		else
			std::cout << "-1\n";
	}
	return 0;
}