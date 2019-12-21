/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 21/12/19.
 * Problem link: https://www.codechef.com/problems/CHFINTRO
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	int r;
	std::cin >> n >> r;
	int R;
	while (n--) {
		std::cin >> R;
		if (R >= r)
			std::cout << "Good boi\n";
		else
			std::cout << "Bad boi\n";
	}
	return 0;
}
