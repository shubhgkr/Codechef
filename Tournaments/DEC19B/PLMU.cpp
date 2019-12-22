/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 15/12/19.
 * Problem link: https://www.codechef.com/DEC19B/problems/PLMU
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		int cnt0 = 0, cnt2 = 0;
		int inp;
		while (n--) {
			std::cin >> inp;
			if (inp == 0) {
				cnt0++;
			} else if (inp == 2) {
				cnt2++;
			}
		}
		long ans = 0;
		if (cnt0 > 1)
			ans += ((cnt0) * (cnt0 - 1));
		if (cnt2 > 1)
			ans += ((cnt2) * (cnt2 - 1));
		std::cout << (ans >> 1) << "\n";
	}
	return 0;
}
