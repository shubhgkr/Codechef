/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 31/12/19.
 * Problem link: https://www.codechef.com/problems/BIT2A
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
		int a[n];
		for (int i = 0; i < n; ++i) {
			std::cin >> a[i];
		}
		int b[n];
		b[n - 1] = 0;
		int cnt = 0;
		int freq = 1;
		for (int i = n - 2; i >= 0; --i) {
			if (a[i] == a[i + 1]) {
				b[i] = b[i + 1];
				freq++;
			} else {
				cnt += freq;
				b[i] = cnt;
				freq = 1;
			}
		}
		for (int i = 0; i < n; ++i) {
			std::cout << b[i] << " ";
		}
		std::cout << "\n";
	}
	return 0;
}
