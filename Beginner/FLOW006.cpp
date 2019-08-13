/*
	Created by shubhgkr on 12/08/19.
	https://www.codechef.com/problems/FLOW006
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
		int s = 0;
		while (n) {
			s += (n % 10);
			n /= 10;
		}
		std::cout << s << "\n";
	}
	return 0;
}