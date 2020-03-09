/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 09/03/20.
 * Problem link: https://www.codechef.com/problems/RESQ
 */

#include<iostream>
#include <cmath>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		for (int i = std::sqrt(n); i > 0; i--) {
			if (n % i == 0) {
				std::cout << (n / i - i) << "\n";
				break;
			}
		}
	}
	return 0;
}
