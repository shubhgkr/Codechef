/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 18/09/19.
 * Problem link: https://www.codechef.com/problems/MISSP
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
		int x;
		int ans = 0;
		while (n--) {
			std::cin >> x;
			ans ^= x;
		}
		std::cout << ans << "\n";
	}
	return 0;
}
