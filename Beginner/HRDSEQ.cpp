/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 7/25/20.
 * Problem link: https://www.codechef.com/problems/HRDSEQ
 */

#include <iostream>
#include <map>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	int arr[130];
	arr[1] = 0;
	std::map<int, std::pair<int, int>> mp;
	mp[0] = std::pair<int, int>(1, 1);
	for (int i = 2; i < 130; i++) {
		int diff = mp[arr[i - 1]].first - mp[arr[i - 1]].second;
		arr[i] = diff;
		if (mp.find(diff) == mp.end())
			mp[diff] = std::pair<int, int>(i, i);
		else {
			mp[diff] = std::pair<int, int>(i, mp[diff].first);
		}
	}
	while (t--) {
		int n;
		std::cin >> n;
		std::cout << std::count(arr + 1, arr + n + 1, arr[n]) << "\n";
	}
	return 0;
}
