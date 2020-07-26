/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 7/27/20.
 * Problem link: https://www.codechef.com/problems/CHEFWORK
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	std::cin >> n;
	int cost[n];
	for (int i = 0; i < n; ++i) {
		std::cin >> cost[i];
	}
	int c;
	int c1 = 100000;
	int c2 = 100000;
	int c3 = 100000;
	for (int i = 0; i < n; ++i) {
		std::cin >> c;
		if (c == 1)
			c1 = std::min(cost[i], c1);
		else if (c == 2)
			c2 = std::min(cost[i], c2);
		else
			c3 = std::min(cost[i], c3);
	}
	std::cout << std::min(c1 + c2, c3);
	return 0;
}
