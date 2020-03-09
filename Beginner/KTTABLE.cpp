/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 10/03/20.
 * Problem link: https://www.codechef.com/problems/KTTABLE
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
		long a[n + 1];
		long b[n];
		a[0] = 0;
		for (int i = 1; i <= n; i++) {
			std::cin >> a[i];
		}
		for (int i = 0; i < n; i++) {
			std::cin >> b[i];
		}
		int cnt = 0;
		for (int i = 1; i <= n; i++) {
			if (a[i] - a[i - 1] >= b[i - 1])
				cnt++;
		}
		std::cout << cnt << "\n";
	}
	return 0;
}
