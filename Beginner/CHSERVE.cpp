/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 7/26/20.
 * Problem link: https://www.codechef.com/problems/CHSERVE
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int p1;
		int p2;
		int k;
		std::cin >> p1 >> p2 >> k;
		int chance = (p1 + p2) / k;
		if (chance & 1)
			std::cout << "COOK\n";
		else
			std::cout << "CHEF\n";
	}
	return 0;
}
