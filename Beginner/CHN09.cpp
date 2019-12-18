/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 19/12/19.
 * Problem link: https://www.codechef.com/problems/CHN09
 */

#include <iostream>
#include <string>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	std::string s;
	int a;
	int b;
	while (t--) {
		a = 0;
		b = 0;
		std::cin >> s;
		for (char ch:s) {
			if (ch == 'a') {
				a++;
			} else {
				b++;
			}
		}
		std::cout << std::min(a, b) << "\n";
	}
	return 0;
}
