/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 8/2/20.
 * Problem link: https://www.codechef.com/problems/RRSUM
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	long long int n;
	int m;
	std::cin >> n >> m;
	while (m--) {
		long long int q;
		std::cin >> q;
		if (q <= n) {
			std::cout << "0\n";
		} else if (q <= 2 * n) {
			std::cout << q - n - 1 << "\n";
		} else
			std::cout << 3 * n - q + 1 << "\n";
	}
	return 0;
}
