/*
    Created by shubhgkr on 14/8/19.
    https://www.codechef.com/problems/GDOG
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
		int ans = 0;
		for (int i = 2; i <= k; i++)
			ans = std::max(ans, n % i);
		std::cout << ans << "\n";
	}
	return 0;
}