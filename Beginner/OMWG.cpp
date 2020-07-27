/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 7/27/20.
 * Problem link: https://www.codechef.com/problems/OMWG
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		int m;
		std::cin >> n >> m;
		std::cout << n * (m - 1) + m * (n - 1) << "\n";
	}
	return 0;
}
