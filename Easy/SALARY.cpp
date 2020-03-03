/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 03/03/20.
 * Problem link: https://www.codechef.com/problems/SALARY
 */

#include<iostream>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		int sum = 0;
		int mn = 10000;
		int x;
		for (int i = 0; i < n; i++) {
			std::cin >> x;
			sum += x;
			mn = std::min(x, mn);
		}
		std::cout << (sum - (mn * n)) << "\n";
	}
	return 0;
}
