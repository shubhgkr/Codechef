/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 26/12/19.
 * Problem link: https://www.codechef.com/problems/EGRANDR
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
		bool fullScore = false;
		bool hasFailed = false;
		float sum = 0.0;
		int x;
		for (int i = 0; i < n; i++) {
			std::cin >> x;
			if (x == 5)
				fullScore = true;
			if (x == 2)
				hasFailed = true;
			else if (!hasFailed)
				sum += x;
		}
		if (hasFailed || !fullScore || sum / n < 4.0)
			std::cout << "No\n";
		else
			std::cout << "Yes\n";
	}
	return 0;
}
