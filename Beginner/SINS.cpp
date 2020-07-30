/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 7/30/20.
 * Problem link: https://www.codechef.com/problems/SINS
 */

#include <iostream>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int x;
		int y;
		std::cin >> x >> y;
		std::cout << (std::__gcd(x, y) << 1) << "\n";
	}
	return 0;
}
