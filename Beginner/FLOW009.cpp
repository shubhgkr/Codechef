/*
    Created by shubhgkr on 14/8/19.
    https://www.codechef.com/problems/FLOW009
*/

#include <iostream>
#include <iomanip>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		double quantity, price;
		std::cin >> quantity >> price;
		double ans = quantity * price;
		if (quantity > 1000)
			ans -= (ans / 10);
		std::cout << std::fixed << std::setprecision(6) << ans << "\n";
	}
	return 0;
}