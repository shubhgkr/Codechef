/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 4/5/20.
 * Problem link: https://www.codechef.com/problems/MATPAN
 */

#include <iostream>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	int price[26];
	bool chars[26];
	while (t--) {
		std::fill(price, price + 26, 0);
		std::fill(chars, chars + 26, false);
		for (int & i : price) {
			std::cin >> i;
		}
		std::string s;
		std::cin >> s;
		for (char ch:s) {
			chars[ch - 'a'] = true;
		}
		int cost = 0;
		for (int i = 0; i < 26; ++i) {
			if (!chars[i]) {
				cost += price[i];
			}
		}
		std::cout << cost << "\n";
	}
	return 0;
}
