/*
    Created by shubhgkr on 13/8/19.
    https://www.codechef.com/problems/FLOW007
*/
#include <iostream>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	int x;
	while (t--) {
		int rev = 0;
		std::cin >> x;
		while (x) {
			rev = rev * 10 + (x % 10);
			x /= 10;
		}
		std::cout << rev << "\n";
	}
	return 0;
}