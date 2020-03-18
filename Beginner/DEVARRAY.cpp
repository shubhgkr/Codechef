/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 3/18/20.
 * Problem link: https://www.codechef.com/problems/DEVARRAY
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	int q;
	std::cin >> n >> q;
	int x;
	std::cin >> x;
	int mx = x;
	int mn = x;
	for (int i = 1; i < n; i++) {
		std::cin >> x;
		mx = std::max(mx, x);
		mn = std::min(mn, x);
	}
	while (q--) {
		std::cin >> x;
		if (mn <= x && x <= mx)
			std::cout << "Yes\n";
		else
			std::cout << "No\n";
	}
	return 0;
}
