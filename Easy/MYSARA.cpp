/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 3/22/20.
 * Problem link: https://www.codechef.com/problems/MYSARA
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
		int arr[n];
		for (int i = 0; i < n; ++i) {
			std::cin >> arr[i];
		}
		bool flag = true;
		for (int i = 0; i < n - 1; ++i) {
			if ((arr[i] & arr[i + 1]) != arr[i]) {
				flag = false;
				break;
			}
		}
		if (flag) {
			int cnt = 0;
			for (int i = 0; i < n - 1; ++i) {
				cnt += __builtin_popcount(arr[i]);
			}
			int ans = 1;
			for (int i = 0; i < cnt; ++i) {
				ans = ans * 2 % 1000000007;
			}
			std::cout << ans << "\n";
		} else {
			std::cout << "0\n";
		}
	}
	return 0;
}
