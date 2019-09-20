/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 20/09/19.
 * Problem link: https://www.codechef.com/problems/TEST
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	while (true) {
		int x;
		std::cin >> x;
		if (x == 42)
			break;
		std::cout << x << "\n";
	}
	return 0;
}
