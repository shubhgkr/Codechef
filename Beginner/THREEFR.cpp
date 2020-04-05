/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 4/5/20.
 * Problem link: https://www.codechef.com/problems/THREEFR
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int x;
		int y;
		int z;
		std::cin >> x >> y >> z;
		if (x + y + z == 2 * std::max(x, std::max(y, z)))
			std::cout << "yes\n";
		else
			std::cout << "no\n";
	}
	return 0;
}
