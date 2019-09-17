/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 17/09/19.
 * Problem link: https://www.codechef.com/problems/PLAYSTR
 */

#include <iostream>
#include <string>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int len;
		std::cin >> len;
		std::string s1;
		std::string s2;
		std::cin >> s1 >> s2;
		int cnt1 = 0;
		int cnt2 = 0;
		for (int pos = 0; pos < len; ++pos) {
			cnt1 += (s1[pos] == '1');
			cnt2 += (s2[pos] == '1');
		}
		if (cnt1 == cnt2)
			std::cout << "YES\n";
		else
			std::cout << "NO\n";
	}
	return 0;
}
