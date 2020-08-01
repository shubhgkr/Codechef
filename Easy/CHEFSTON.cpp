/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 8/1/20.
 * Problem link: https://www.codechef.com/problems/CHEFSTON
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
		long long int a[n];
		long long int b[n];
		for (int i = 0; i < n; ++i) {
			std::cin >> a[i];
		}
		for (int i = 0; i < n; ++i) {
			std::cin >> b[i];
		}
		long long int mx = 0;
		for (int i = 0; i < n; ++i) {
			mx = std::max(mx, k / a[i] * b[i]);
		}
	}
	return 0;
}
