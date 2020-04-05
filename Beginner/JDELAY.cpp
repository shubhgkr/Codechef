/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 4/5/20.
 * Problem link: https://www.codechef.com/problems/JDELAY
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
		int cnt = 0;
		int s;
		int j;
		for (int i = 0; i < n; ++i) {
			std::cin >> s >> j;
			if (j - s > 5)
				cnt++;
		}
		std::cout << cnt << "\n";
	}
	return 0;
}
