/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 8/2/20.
 * Problem link: https://www.codechef.com/problems/NAME1
 */

#include <iostream>
#include <algorithm>
#include <string>
#include <array>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		std::string a;
		std::string b;
		std::cin >> a >> b;
		std::array<int, 26> cnt{};
		for (char ch:a + b) {
			cnt[ch - 'a']++;
		}
		int n;
		std::cin >> n;
		bool flag = true;
		while (n--) {
			std::string s;
			std::cin >> s;
			for (char ch:s) {
				cnt[ch - 'a']--;
			}
			if (std::any_of(cnt.begin(), cnt.end(), [](int i) { return i < 0; }))
				flag = false;

		}
		if (flag)
			std::cout << "YES\n";
		else
			std::cout << "NO\n";
	}
	return 0;
}
