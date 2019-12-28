/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 28/12/19.
 * Problem link: https://www.codechef.com/LTIME79B/problems/STUPMACH
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
		long x;
		long long int total = 0;
		long minValue = 1000000001;
		for (int i = 0; i < n; ++i) {
			std::cin >> x;
			if (x < minValue) {
				total += x;
				minValue = x;
			} else
				total += minValue;
		}
		std::cout << total << "\n";
	}
	return 0;
}
