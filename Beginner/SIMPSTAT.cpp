/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 7/26/20.
 * Problem link: https://www.codechef.com/problems/SIMPSTAT
 */

#include <iostream>
#include <algorithm>
#include <iomanip>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		int k;
		std::cin >> n >> k;
		double sum = 0;
		int inp;
		int arr[n];
		for (int i = 0; i < n; ++i) {
			std::cin >> arr[i];
		}
		std::sort(arr, arr + n);
		for (int i = k; i < n - k; ++i) {
			sum += arr[i];
		}
		std::cout << std::fixed << std::setprecision(6) << sum / (n - 2 * k) << "\n";
	}
	return 0;
}
