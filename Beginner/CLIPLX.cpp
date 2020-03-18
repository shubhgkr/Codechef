/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 3/18/20.
 * Problem link: https://www.codechef.com/problems/CLIPLX
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int x;
		int y;
		std::cin >> x >> y;
		std::cout << std::max(0, x - y) << "\n";
	}
	return 0;
}
