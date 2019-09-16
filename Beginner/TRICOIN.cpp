/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 16/09/19.
 * https://www.codechef.com/problems/TRICOIN
 */

#include <iostream>
#include <cmath>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		long n;
		std::cin >> n;
		std::cout << std::floor((-1 + std::floor(std::sqrt(1 + 8 * n))) / 2) << "\n";
	}
	return 0;
}
