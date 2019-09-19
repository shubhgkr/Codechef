/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 19/09/19.
 * Problem link: https://www.codechef.com/problems/LCH15JAB
 */

#include <iostream>
#include <string>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	std::string s;
	int cnt[26];
	while (t--) {
		std::cin >> s;
		int l = s.length();
		if (l & 1)
			std::cout << "NO\n";
		else {
			std::fill(cnt, cnt + 26, 0);
			for (char ch : s) {
				cnt[ch - 'a']++;
			}
			bool flag = false;
			l >>= 1;
			for (int c : cnt) {
				if (c == l) {
					flag = true;
					break;
				}
			}
			if (flag)
				std::cout << "YES\n";
			else
				std::cout << "NO\n";
		}
	}
	return 0;
}
