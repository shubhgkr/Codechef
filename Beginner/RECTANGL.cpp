/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 18/09/19.
 * Problem link: https://www.codechef.com/problems/RECTANGL
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int a, b, c, d;
		std::cin >> a >> b >> c >> d;
		if ((a == b && c == d) || (a == c && b == d) || (a == d && c == b))
			std::cout << "YES\n";
		else
			std::cout << "NO\n";
	}
	return 0;
}
