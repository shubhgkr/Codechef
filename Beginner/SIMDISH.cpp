/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 17/09/19.
 * Problem link: https://www.codechef.com/problems/SIMDISH
 */

#include <iostream>
#include <string>
#include <unordered_set>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		std::unordered_set<std::string> st;
		int inputCnt = 8;
		std::string s;
		while (inputCnt--) {
			std::cin >> s;
			st.insert(s);
		}
		if (st.size() < 7)
			std::cout << "similar\n";
		else
			std::cout << "dissimilar\n";
	}
	return 0;
}
