/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 24/12/19.
 * Problem link: https://www.codechef.com/problems/CO92JUDG
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
		int s1 = 0;
		int mx1 = 0;
		int s2 = 0;
		int mx2 = 0;
		int x;
		for (int i = 0; i < n; ++i) {
			std::cin >> x;
			s1 += x;
			mx1 = std::max(x, mx1);
		}
		for (int i = 0; i < n; ++i) {
			std::cin >> x;
			s2 += x;
			mx2 = std::max(x, mx2);
		}
		s1 -= mx1;
		s2 -= mx2;
		if (s1 < s2)
			std::cout << "Alice\n";
		else if (s1 > s2)
			std::cout << "Bob\n";
		else
			std::cout << "Draw\n";
	}
	return 0;
}
