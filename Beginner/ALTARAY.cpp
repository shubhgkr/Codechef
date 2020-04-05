/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 4/5/20.
 * Problem link: https://www.codechef.com/problems/ALTARAY
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
		bool arr[n];
		int x;
		for (int i = 0; i < n; ++i) {
			std::cin >> x;
			arr[i] = x > 0;
		}
		int cnt = 1;
		int ans[n];
		bool flag = arr[n - 1];
		for (int i = n - 1; i >= 0; --i) {
			if (flag ^ arr[i]) {
				cnt++;
			} else {
				cnt = 1;
			}
			ans[i] = cnt;
			flag = arr[i];
		}
		for (int i = 0; i < n; ++i) {
			std::cout << ans[i] << " ";
		}
		std::cout << "\n";
	}
	return 0;
}
