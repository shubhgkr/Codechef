/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 25/12/19.
 * Problem link: https://www.codechef.com/problems/TICKETS5
 */

#include <iostream>
#include <set>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	std::string s[t];
	for (int i = 0; i < t; ++i) {
		std::cin >> s[i];
	}
	for (std::string str:s) {
		std::set<char> st;
		int len = str.length();
		bool flag = true;
		for (int i = 0; i < len - 1; i++) {
			st.insert(str[i]);
			st.insert(str[i + 1]);
			if (str[i] == str[i + 1]) {
				flag = false;
				break;
			}
		}
		std::cout << (flag && st.size() == 2 ? "YES\n" : "NO\n");
	}
	return 0;
}
