/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 4/1/20.
 * Problem link: https://www.codechef.com/problems/HILLS
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		int u;
		int d;
		std::cin >> n >> u >> d;
		int arr[n];
		for (int i = 0; i < n; ++i) {
			std::cin >> arr[i];
		}
		int cnt = 0;
		bool flag = false;
		int i = 0;
		while (cnt < n - 1) {
			if (arr[cnt] >= arr[cnt + 1] && arr[cnt] - arr[cnt + 1] <= d) {
				cnt++;
				continue;
			}
			if (arr[cnt] >= arr[cnt + 1] && !flag) {
				cnt++;
				flag = true;
				continue;
			}
			if (arr[cnt] <= arr[cnt + 1] && arr[cnt + 1] - arr[cnt] <= u) {
				cnt++;
				continue;
			}
			break;
		}
		std::cout << cnt + 1 << "\n";
	}
	return 0;
}
