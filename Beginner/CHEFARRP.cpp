/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 4/5/20.
 * Problem link: https://www.codechef.com/problems/CHEFARRP
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
		long cnt = 0;
		for (int i = 0; i < n; ++i) {
			int sum = 0;
			int prd = 1;
			for (int j = i; j < n; ++j) {
				sum += arr[j];
				prd *= arr[j];
				if (sum == prd)
					cnt++;
			}
		}
		std::cout << cnt << "\n";
	}
	return 0;
}
