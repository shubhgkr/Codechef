/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 19/12/19.
 * Problem link: https://www.codechef.com/problems/DWNLD
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int tc;
	std::cin >> tc;
	while (tc--) {
		int n;
		int k;
		std::cin >> n >> k;
		int t[n];
		int d[n];
		for (int i = 0; i < n; ++i) {
			std::cin >> t[i] >> d[i];
		}
		int sum = 0;
		for (int i = 0; i < n; ++i) {
			if (k != 0) {
				if (k >= t[i]) {
					k -= t[i];
					t[i] = 0;

				} else {
					t[i] -= k;
					k = 0;
				}
			}
			sum += (t[i] * d[i]);
		}
		std::cout << sum << "\n";
	}
	return 0;
}
