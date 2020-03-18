/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 3/18/20.
 * Problem link: https://www.codechef.com/problems/COMM3
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int r;
		std::cin >> r;
		int x1;
		int y1;
		int x2;
		int y2;
		int x3;
		int y3;
		std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		int cnt = 0;
		if ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) <= r * r)cnt++;
		if ((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2) <= r * r)cnt++;
		if ((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3) <= r * r)cnt++;
		if (cnt > 1)
			std::cout << "yes\n";
		else
			std::cout << "no\n";
	}
	return 0;
}
