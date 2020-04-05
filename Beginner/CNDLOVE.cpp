/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 4/5/20.
 * Problem link: https://www.codechef.com/problems/CNDLOVE
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		bool isOdd = false;
		int x;
		while (n--) {
			std::cin >> x;
			isOdd = isOdd ^ (x & 1);
		}
		if (isOdd)
			std::cout << "YES\n";
		else
			std::cout << "NO\n";
	}
	return 0;
}
