/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 7/25/20.
 * Problem link: https://www.codechef.com/problems/MSNSADM1
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
		int a[n];
		int b[n];
		for (int i = 0; i < n; ++i) {
			std::cin >> a[i];
		}
		for (int i = 0; i < n; ++i) {
			std::cin >> b[i];
		}
		int max = 0;
		for (int i = 0; i < n; ++i) {
			max = std::max(max, a[i] * 20 - b[i] * 10);
		}
		std::cout << max << "\n";
	}
	return 0;
}
