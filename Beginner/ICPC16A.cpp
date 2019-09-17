/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 17/09/19.
 * Problem link: https://www.codechef.com/problems/ICPC16A
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	int x1;
	int y1;
	int x2;
	int y2;
	while (t--) {
		std::cin >> x1 >> y1 >> x2 >> y2;
		if (x1 != x2 && y1 != y2)
			std::cout << "sad\n";
		else {
			if (x1 > x2)
				std::cout << "left\n";
			else if (y1 > y2)
				std::cout << "down\n";
			else if (x2 > x1)
				std::cout << "right\n";
			else
				std::cout << "up\n";
		}
	}
	return 0;
}
