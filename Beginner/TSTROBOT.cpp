/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 7/26/20.
 * Problem link: https://www.codechef.com/problems/TSTROBOT
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int x;
		int n;
		std::cin >> x >> n;
		std::string s;
		std::cin >> s;
		int mx = n;
		int mn = n;
		for (char ch:s) {
			if (ch == 'R')
				n++;
			else
				n--;
			mx = std::max(mx, n);
			mn = std::min(mn, n);
		}
		std::cout << mx - mn + 1 << "\n";
	}
	return 0;
}
