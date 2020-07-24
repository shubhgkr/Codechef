/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 7/24/20.
 * Problem link: https://www.codechef.com/problems/NAME2
 */

#include <iostream>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		std::string s1;
		std::string s2;
		std::cin >> s1 >> s2;
		if (s1.length() > s2.length())
			std::swap(s1, s2);
		int j = 0;
		bool flag = true;
		for (int i = 0; i < s1.length(); ++i, ++j) {
			while (j < s2.length()) {
				if (s2[j] == s1[i]) {
					break;
				}
				j++;
			}
			if (j >= s2.length()) {
				flag = false;
				break;
			}
		}
		if (flag) {
			std::cout << "YES\n";
		} else {
			std::cout << "NO\n";
		}
	}
	return 0;
}
