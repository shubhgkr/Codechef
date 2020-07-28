/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 7/28/20.
 * Problem link: https://www.codechef.com/problems/RECNDSTR
 */

#include <iostream>
#include <unordered_set>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		std::string s;
		std::cin >> s;
		std::unordered_set<char> st(s.begin(), s.end());
		if (st.size() == 1)
			std::cout << "YES\n";
		else if (st.size() == 2) {
			if (s.length() % 2 == 1)
				std::cout << "NO\n";
			else {
				char a = s[0];
				char b = s[1];
				bool flag = true;
				for (int i = 2; i <= s.length() - 2; i += 2) {
					if (s[i] != a || s[i + 1] != b) {
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
		} else
			std::cout << "NO\n";
	}
	return 0;
}
