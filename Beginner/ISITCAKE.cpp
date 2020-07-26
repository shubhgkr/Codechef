/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 7/26/20.
 * Problem link: https://www.codechef.com/problems/ISITCAKE
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int cnt = 0;
		int time;
		for (int i = 0; i < 10; ++i) {
			for (int j = 0; j < 10; ++j) {
				std::cin >> time;
				if (time <= 30)
					cnt++;
			}
		}
		if (cnt >= 60)
			std::cout << "yes\n";
		else
			std::cout << "no\n";
	}
	return 0;
}
