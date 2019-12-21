/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 21/12/19.
 * Problem link: https://www.codechef.com/problems/PLAYPIAN
 */

#include <iostream>
#include <string>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	std::string s;
	while (t--) {
		std::cin >> s;
		int len = s.length();
		bool flag = true;
		for (int i = 0; i < len; i += 2) {
			if (s[i] == s[i + 1]) {
				flag = false;
				break;
			}
		}
		std::cout << (flag ? "yes\n" : "no\n");
	}
	return 0;
}
