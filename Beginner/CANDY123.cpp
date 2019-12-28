/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 28/12/19.
 * Problem link: https://www.codechef.com/problems/CANDY123
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
		std::cin >> a >> b;
		int c = 1;
		std::string winner;
		while (true) {
			if (c & 1) {
				if (a >= c) {
					a -= c;
				} else {
					winner = "Bob";
					break;
				}
			} else {
				if (b >= c) {
					b -= c;
				} else {
					winner = "Limak";
					break;
				}
			}
			c++;
		}
		std::cout << winner << "\n";
	}
	return 0;
}
