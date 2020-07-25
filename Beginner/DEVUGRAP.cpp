/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 7/25/20.
 * Problem link: https://www.codechef.com/problems/DEVUGRAP
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		int k;
		std::cin >> n >> k;
		int inp;
		long cnt = 0;
		for (int i = 0; i < n; ++i) {
			std::cin >> inp;
			int rem = inp % k;
			if (inp >= k) cnt += std::min(rem, k - rem);
			else cnt += k - rem;
		}
		std::cout << cnt << "\n";
	}
	return 0;
}
