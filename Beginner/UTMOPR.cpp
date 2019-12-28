/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 28/12/19.
 * Problem link: https://www.codechef.com/problems/UTMOPR
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		int k;
		std::cin >> n >> k;
		bool isOdd = false;
		while (n--) {
			int x;
			std::cin >> x;
			isOdd ^= (x & 1);
		}
		if (k == 1) {
			if (isOdd)
				std::cout << "even\n";
			else
				std::cout << "odd\n";
		} else
			std::cout << "even\n";
	}
	return 0;
}
