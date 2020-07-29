/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 7/29/20.
// * Problem link: https://www.codechef.com/problems/AVG
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
		int v;
		std::cin >> n >> k >> v;
		int total = (n + k) * v;
		int sum = 0;
		int inp;
		for (int i = 0; i < n; ++i) {
			std::cin >> inp;
			sum += inp;
		}
		if ((total - sum) % k)
			std::cout << "-1\n";
		else {
			int ans = (total - sum) / k;
			if (ans > 0)
				std::cout << ans << "\n";
			else
				std::cout << "-1\n";
		}
	}
	return 0;
}
