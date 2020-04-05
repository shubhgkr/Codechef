/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 4/5/20.
 * Problem link: https://www.codechef.com/problems/CHEFRUN
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int x1;
		int x2;
		int x3;
		int v1;
		int v2;
		std::cin >> x1 >> x2 >> x3 >> v1 >> v2;
		double dist1 = x3 - x1;
		double dist2 = x2 - x3;
		double ans1 = dist1 / v1;
		double ans2 = dist2 / v2;
		if (ans1 < ans2)
			std::cout << "Chef\n";
		else if (ans1 == ans2)
			std::cout << "Draw\n";
		else
			std::cout << "Kefa\n";
	}
	return 0;
}
