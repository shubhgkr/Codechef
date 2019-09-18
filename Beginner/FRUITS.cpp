/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 18/09/19.
 * Problem link: https://www.codechef.com/problems/FRUITS
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
		int k;
		std::cin >> n >> m >> k;
		int maxC = std::max(n, m);
		int minC = std::min(n, m);
		int ans = maxC - std::min(minC + k, maxC);
		std::cout << ans << "\n";
	}
	return 0;
}
