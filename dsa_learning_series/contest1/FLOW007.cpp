/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 7/20/20.
 * Problem link: https://www.codechef.com/LRNDSA01/problems/FLOW007
 */

#include <iostream>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		std::string n;
		std::cin >> n;
		std::reverse(n.begin(), n.end());
		std::cout << std::stoi(n) << "\n";
	}
	return 0;
}
