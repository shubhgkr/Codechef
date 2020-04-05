/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 4/5/20.
 * Problem link: https://www.codechef.com/problems/RPD
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
		int mxSum = 0;
		for (int i = 0; i < n; ++i) {
			for (int j = i + 1; j < n; ++j) {
				int prod = arr[i] * arr[j];
				int sum = 0;
				while (prod != 0) {
					sum += (prod % 10);
					prod /= 10;
				}
				mxSum = std::max(mxSum, sum);
			}
		}
		std::cout << mxSum << "\n";
	}
	return 0;
}
