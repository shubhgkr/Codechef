/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 8/1/20.
 * Problem link: https://www.codechef.com/problems/LCPESY
 */

#include <iostream>
#include <numeric>
#include <array>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		std::array<int, 256> cnt1{0};
		std::array<int, 256> cnt2{0};
		std::string s1;
		std::string s2;
		std::cin >> s1 >> s2;
		for (char ch:s1) {
			cnt1[ch - 'a']++;
		}
		for (char ch:s2) {
			cnt2[ch - 'a']++;
		}
		int ans = std::inner_product(cnt1.begin(), cnt1.end(), cnt2.begin(), 0,
									 std::plus<>(), [](auto a, auto b) { return std::min(a, b); });
		std::cout << ans << "\n";
	}
	return 0;
}
