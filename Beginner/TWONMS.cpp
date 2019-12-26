/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 26/12/19.
 * Problem link: https://www.codechef.com/problems/TWONMS
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int a;
		int b;
		int n;
		std::cin >> a >> b >> n;
		if (n & 1) {
			a = a << 1;
		}
		int mx = std::max(a, b);
		int mn = std::min(a, b);
		std::cout << (mx / mn) << "\n";
	}
	return 0;
}
