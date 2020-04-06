/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 4/6/20.
 * Problem link: https://www.codechef.com/problems/CHEFROUT
 */

#include <iostream>
#include <regex>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		std::string n;
		std::cin >> n;
		std::cout << (regex_match(n, std::regex("^C*E*S*$")) ? "yes\n" : "no\n");
	}
	return 0;
}
