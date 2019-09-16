/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 16/09/19.
 * https://www.codechef.com/problems/TLG
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	int p1Win = 1;
	int s1 = 0;
	int s2 = 0;
	int mx = 0;
	while (t--) {
		int a, b;
		std::cin >> a >> b;
		s1 += a;
		s2 += b;
		int diff = s1 - s2;
		if (std::abs(diff) >= mx) {
			mx = std::abs(diff);
			p1Win = (diff > 0) ? 1 : 2;
		}
	}
	std::cout << p1Win << " " << mx;
	return 0;
}
