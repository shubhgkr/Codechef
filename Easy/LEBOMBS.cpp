/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 08/03/20.
 * Problem link: https://www.codechef.com/problems/LEBOMBS
 */

#include<iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		std::string s;
		std::cin >> s;
		int cnt = 0;
		bool isDestroyed[n + 1];
		std::fill(isDestroyed, isDestroyed + n + 1, false);
		for (int i = 1; i <= n; i++) {
			if (s[i - 1] == '1') {
				isDestroyed[i] = true;
				if (i > 1)
					isDestroyed[i - 1] = true;
				if (i < n)
					isDestroyed[i + 1] = true;
			}
		}
		for (int i = 1; i <= n; i++) {
			if (!isDestroyed[i])
				cnt++;
		}
		std::cout << cnt << "\n";
	}
	return 0;
}
