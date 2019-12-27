/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 27/12/19.
 * Problem link: https://www.codechef.com/problems/FLOW016
 */

#include <iostream>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		long a;
		long b;
		std::cin >> a >> b;
		long gcd = std::__gcd(a, b);
		long mul = a * b;
		std::cout << gcd << " " << mul / gcd << "\n";
	}
	return 0;
}
