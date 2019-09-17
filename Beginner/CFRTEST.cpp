/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 17/09/19.
 * Problem link: https://www.codechef.com/problems/CFRTEST
 */

#include <iostream>
#include <unordered_set>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		std::unordered_set<int> st;
		int len;
		std::cin >> len;
		int x;
		while (len--) {
			std::cin >> x;
			st.insert(x);
		}
		std::cout << st.size() << "\n";
	}
	return 0;
}
