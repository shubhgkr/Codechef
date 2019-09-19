/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 19/09/19.
 * Problem link: https://www.codechef.com/problems/LAPIN
 */

#include <iostream>
#include <string>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	std::string s;
	while (t--) {
		std::cin >> s;
		int l = s.length();
		std::string left = s.substr(0, l / 2);
		std::string right = s.substr((l & 1) + l / 2);
		std::sort(left.begin(), left.end());
		std::sort(right.begin(), right.end());
		if (left == right)
			std::cout << "YES\n";
		else
			std::cout << "NO\n";
	}
	return 0;
}
