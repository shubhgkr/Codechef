/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 17/11/19.
 * Problem link: https://www.codechef.com/COOK112B/problems/DIET
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	int n, k, left = 0, i;
	int pos = 0;
	while (t--) {
		std::cin >> n >> k;
		int x;
		left = 0;
		pos = 0;
		for (i = 1; i <= n; i++) {
			std::cin >> x;
			if (pos == 0 && k <= left + x)
				left = x + left - k;
			else if (pos == 0)
				pos = i;
		}
		if (pos)
			std::cout << "NO " << pos << "\n";
		else
			std::cout << "YES\n";
	}
	return 0;
}
