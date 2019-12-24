/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 24/12/19.
 * Problem link: https://www.codechef.com/problems/COOMILK
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
		std::string lastInp;
		std::string currInp;
		bool flag = true;
		std::cin >> lastInp;
		while (--n) {
			std::cin >> currInp;
			if (currInp == "cookie" && currInp == lastInp)
				flag = false;
			lastInp = currInp;
		}
		std::cout << ((flag && lastInp != "cookie") ? "YES\n" : "NO\n");
	}
	return 0;
}
