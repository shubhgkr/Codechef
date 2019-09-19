/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 19/09/19.
 * Problem link: https://www.codechef.com/problems/COLOR
 */

#include <iostream>
#include <string>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		std::string s;
		std::cin >> s;
		int cnt1 = 0;
		int cnt2 = 0;
		int cnt3 = 0;
		for (int i = 0; i < n; ++i) {
			if (s[i] == 'R') cnt1++;
			else {
				if (s[i] == 'G') cnt2++;
				else cnt3++;
			}
		}
		int ans = (cnt1 > cnt2) ? ((cnt1 > cnt3) ? (cnt1) : (cnt3)) : ((cnt2 > cnt3) ? (cnt2) : (cnt3));
		std::cout << n - ans << "\n";
	}
	return 0;
}
