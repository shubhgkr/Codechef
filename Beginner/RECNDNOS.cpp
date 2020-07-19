/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 7/19/20.
 * Problem link: https://www.codechef.com/problems/RECNDNOS
 */

#include <iostream>
#include <map>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		std::map<int, int> mp;
		int prev;
		std::cin >> prev;
		mp[prev]++;
		int curr;
		for (int i = 1; i < n; ++i) {
			std::cin >> curr;
			if (prev != curr) {
				mp[curr]++;
				prev = curr;
			} else {
				prev = -1;
			}
		}
		auto mx = std::max_element(mp.begin(), mp.end(), [](
				const auto &p1, const auto &p2) {
			return p1.second < p2.second;
		});
		std::cout << mx->first << "\n";
	}
	return 0;
}
