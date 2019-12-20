/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 20/12/19.
 * Problem link: https://www.codechef.com/problems/SC31
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
		std::string arr[n];
		for (int i = 0; i < n; ++i) {
			std::cin >> arr[i];
		}
		int ans = 0;
		for (int j = 0; j < 10; ++j) {
			int sum = 0;
			for (int i = 0; i < n; ++i) {
				sum ^= (arr[i][j] - '0');
			}
			ans += sum;
		}
		std::cout << ans << "\n";
	}
	return 0;
}
