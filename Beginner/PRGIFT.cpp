/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 4/5/20.
 * Problem link: https://www.codechef.com/problems/PRGIFT
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
		int cnt = 0;
		int x;
		for (int i = 0; i < n; ++i) {
			std::cin >> x;
			if (!(x & 1))
				cnt++;
		}
		if (k == 0 && cnt == n)
			std::cout << "NO\n";
		else if (cnt >= k)
			std::cout << "YES\n";
		else
			std::cout << "NO\n";
	}
	return 0;
}
