/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 4/5/20.
 * Problem link: https://www.codechef.com/problems/SUBINC
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
		long long cnt = 1;
		long long int sum = 0;
		for (int i = 0; i < n - 1; i++) {
			if (arr[i] <= arr[i + 1])
				cnt++;
			else {
				sum += (((cnt - 1) * cnt) / 2);
				cnt = 1;
			}
		}
		if (cnt > 1)
			sum += (((cnt - 1) * cnt) / 2);
		std::cout << sum + n << "\n";
	}
	return 0;
}
