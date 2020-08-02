/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 8/2/20.
 * Problem link: https://www.codechef.com/problems/KINGSHIP
 */

#include <iostream>
#include <algorithm>

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
		std::sort(arr, arr + n);
		long long int ans = 0;
		for (int i = 1; i < n; ++i) {
			ans += (1LL * arr[0] * arr[i]);
		}
		std::cout << ans << "\n";
	}
	return 0;
}
