/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 24/12/19.
 * Problem link: https://www.codechef.com/problems/CHCHCL
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	int n;
	int m;
	while (t--) {
		std::cin >> n >> m;
		std::cout << ((n & 1) && (m & 1) ? "No\n" : "Yes\n");
	}
	return 0;
}
