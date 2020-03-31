/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 4/1/20.
 * Problem link: https://www.codechef.com/problems/CATSDOGS
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int c;
		int d;
		int l;
		std::cin >> c >> d >> l;
		bool flag = false;
		if (l % 4 == 0) {
			l = l / 4;
			if (l >= d) {
				l -= d;
				if (l <= c) {
					flag = ((c - l) <= (2 * d));
				}
			}
		}
		std::cout << (flag ? "yes\n" : "no\n");
	}
	return 0;
}
