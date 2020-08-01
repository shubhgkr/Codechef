/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 8/1/20.
 * Problem link: https://www.codechef.com/problems/LUCKY5
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		std::string s;
		std::cin >> s;
		int cnt = 0;
		for (char ch:s) {
			if (ch != '4' && ch != '7') {
				cnt++;
			}
		}
		std::cout << cnt << "\n";
	}
	return 0;
}
