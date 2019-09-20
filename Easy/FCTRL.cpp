/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 20/09/19.
 * Problem link: https://www.codechef.com/problems/FCTRL
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	long n;
	int cntZero = 0;
	while (t--) {
		std::cin >> n;
		cntZero = 0;
		int c = 5;
		while ((n / c) > 0) {
			cntZero = cntZero + (n / c);
			c = c * 5;
		}
		std::cout << cntZero << "\n";
	}
	return 0;
}
