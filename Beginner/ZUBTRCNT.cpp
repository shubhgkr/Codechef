/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 7/19/20.
 * Problem link: https://www.codechef.com/problems/ZUBTRCNT
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	for (int i = 1; i <= t; ++i) {
		int l;
		int k;
		std::cin >> l >> k;
		if (k > l) {
			std::cout << "Case " << i << ": 0\n";
		} else {
			int ans = l - k + 1;
			ans = ans * (ans + 1) / 2;
			std::cout << "Case " << i << ": " << ans << "\n";
		}
	}
	return 0;
}
