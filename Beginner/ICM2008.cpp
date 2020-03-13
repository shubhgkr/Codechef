/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 13/03/20.
 * Problem link: https://www.codechef.com/problems/ICM2008
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int a;
		int b;
		int c;
		int d;
		std::cin >> a >> b >> c >> d;
		if (a == b)
			std::cout << "YES\n";
		else if (c == d)
			std::cout << "NO\n";
		else {
			if (std::abs(a - b) % std::abs(c - d) == 0)
				std::cout << "YES\n";
			else
				std::cout << "NO\n";
		}
	}
	return 0;
}
