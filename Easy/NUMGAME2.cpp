/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 7/23/20.
 * Problem link: https://www.codechef.com/problems/NUMGAME2
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
		if ((n & 3) == 1)
			std::cout << "ALICE\n";
		else
			std::cout << "BOB\n";
	}
	return 0;
}
