/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 7/27/20.
 * Problem link: https://www.codechef.com/problems/FRGTNLNG
 */

#include <iostream>
#include <unordered_set>
#include <vector>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		std::vector<std::string> vec;
		int n;
		int k;
		std::cin >> n >> k;
		std::string inp;
		for (int i = 0; i < n; ++i) {
			std::cin >> inp;
			vec.push_back(inp);
		}
		std::unordered_set<std::string> st;
		for (int i = 0; i < k; ++i) {
			int cnt;
			std::cin >> cnt;
			for (int j = 0; j < cnt; ++j) {
				std::cin >> inp;
				st.insert(inp);
			}
		}
		for (const std::string &s:vec) {
			if (st.find(s) != st.end()) {
				std::cout << "YES ";
			} else {
				std::cout << "NO ";
			}
		}
		std::cout << "\n";
	}
	return 0;
}
