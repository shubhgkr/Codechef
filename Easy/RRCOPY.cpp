/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 08/03/20.
 * Problem link: https://www.codechef.com/problems/RRCOPY
 */

#include <iostream>
#include <unordered_set>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		std::unordered_set<int> st;
		while (n--) {
			int x;
			std::cin >> x;
			st.insert(x);
		}
		std::cout << st.size() << "\n";
	}
	return 0;
}
