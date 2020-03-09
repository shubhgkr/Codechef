/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 10/03/20.
 * Problem link: https://www.codechef.com/problems/LOSTMAX
 */

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	std::cin.ignore();
	while (t--) {
		std::string s;
		std::getline(std::cin, s);
		std::vector<int> n;
		int num = 0;
		int cnt = 0;
		s += " ";
		for (char ch:s) {
			if (ch == ' ') {
				n.push_back(num);
				num = 0;
				cnt++;
			} else {
				num = (num * 10) + (ch - '0');
			}
		}
		std::sort(n.begin(), n.end());
		if (n[cnt - 1] != cnt - 1)
			std::cout << n[cnt - 1] << "\n";
		else
			std::cout << n[cnt - 2] << "\n";
	}
	return 0;
}
