/*
	Created by shubhgkr on 12/08/19.
	https://www.codechef.com/problems/PALL01
*/

#include <iostream>
#include <string>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t = 0;
	std::cin >> t;
	std::string s;
	while (t--) {
		std::cin >> s;
		if (std::equal(s.begin(), s.begin() + s.size()/2, s.rbegin()) )
			std::cout << "wins\n";
		else
			std::cout << "losses\n";
	}
	return 0;
}