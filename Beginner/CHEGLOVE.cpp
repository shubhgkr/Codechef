/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 7/20/20.
 * Problem link: https://www.codechef.com/problems/CHEGLOVE
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
		int fingers[n];
		int glove[n];
		bool ltr = true;
		bool rtl = true;
		for (int i = 0; i < n; ++i) {
			std::cin >> fingers[i];
		}
		for (int i = 0; i < n; ++i) {
			std::cin >> glove[i];
		}
		for (int i = 0; i < n; ++i) {
			if (fingers[i] > glove[i])
				ltr = false;
			if (fingers[i] > glove[n - 1 - i])
				rtl = false;
		}
		if (ltr && rtl)
			std::cout << "both\n";
		else if (ltr)
			std::cout << "front\n";
		else if (rtl)
			std::cout << "back\n";
		else
			std::cout << "none\n";
	}
	return 0;
}
