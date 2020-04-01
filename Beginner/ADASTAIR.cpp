/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 4/1/20.
 * Problem link: https://www.codechef.com/problems/ADASTAIR
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
		int arr[n + 1];
		arr[0] = 0;
		for (int i = 1; i <= n; ++i) {
			std::cin >> arr[i];
		}
		int cnt = 0;
		for (int i = 1; i <= n; i++) {
			cnt += ((arr[i] - arr[i - 1] - 1) / k);
		}
		std::cout << cnt << "\n";
	}
	return 0;
}
