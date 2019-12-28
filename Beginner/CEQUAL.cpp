/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 28/12/19.
 * Problem link: https://www.codechef.com/problems/CEQUAL
 */

#include <iostream>
#include <unordered_set>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	int x;
	while (t--) {
		int n;
		std::cin >> n;
		std::unordered_set<int> st;
		for (int i = 0; i < n; ++i) {
			std::cin >> x;
			st.insert(x);
		}
		std::cout << (st.size() != n ? "Yes\n" : "No\n");
	}
	return 0;
}
