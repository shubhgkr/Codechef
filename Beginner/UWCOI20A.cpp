/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 14/03/20.
 * Problem link: https://www.codechef.com/problems/UWCOI20A
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
		int x;
		std::cin >> x;
		int mx = x;
		while (--n) {
			std::cin >> x;
			mx = std::max(mx, x);
		}
		std::cout << mx << "\n";
	}
	return 0;
}
