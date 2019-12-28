/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 28/12/19.
 * Problem link: https://www.codechef.com/LTIME79B/problems/CHEALG
 */

#include <iostream>
#include <string>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		std::string s;
		std::cin >> s;
		int len = s.length();
		std::string str = "";
		int cnt = 1;
		char ch = s[0];
		for (int i = 1; i < len; ++i) {
			if (s[i] == ch)
				cnt++;
			else {
				str += ch + std::to_string(cnt);
				cnt = 1;
				ch = s[i];
			}
		}
		str += ch + std::to_string(cnt);
		if (str.length() < len)
			std::cout << "YES\n";
		else
			std::cout << "NO\n";
	}
	return 0;
}
