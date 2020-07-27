/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 7/27/20.
 * Problem link: https://www.codechef.com/problems/PINS
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
		int ans = n - (n + 1) / 2;
		std::cout << "1 1";
		for (int i = 0; i < ans; ++i) {
			std::cout << "0";
		}
		std::cout << "\n";
	}
	return 0;
}
