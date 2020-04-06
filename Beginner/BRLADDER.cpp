/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 4/6/20.
 * Problem link: https://www.codechef.com/problems/BRLADDER
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int q;
	std::cin >> q;
	while (q--) {
		int a;
		int b;
		std::cin >> a >> b;
		if (a > b)
			std::swap(a, b);
		if ((a + 2 == b) || (a & 1 && a + 1 == b))
			std::cout << "YES\n";
		else
			std::cout << "NO\n";
	}
	return 0;
}
