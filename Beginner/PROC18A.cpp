/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 7/26/20.
 * Problem link: https://www.codechef.com/problems/PROC18A
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
		int sum[n + 1];
		sum[0] = 0;
		int inp;
		for (int i = 1; i <= n; ++i) {
			std::cin >> inp;
			sum[i] = sum[i - 1] + inp;
		}
		int mxSum = sum[k];
		for (int i = k; i <= n; ++i) {
			mxSum = std::max(mxSum, sum[i] - sum[i - k]);
		}
		std::cout << mxSum << "\n";
	}
	return 0;
}
