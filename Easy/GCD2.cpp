/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 08/03/20.
 * Problem link: https://www.codechef.com/problems/GCD2
 */

#include <iostream>
#include <algorithm>

int mod(int a, std::string b) {
	int p = 0;
	for (char ch:b) {
		p = ((ch - '0') + p * 10) % a;
	}
	return p;
}

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int a;
		std::cin >> a;
		std::string b;
		std::cin >> b;
		if (a == 0)
			std::cout << b << "\n";
		else {
			int rem = mod(a, b);
			std::cout << std::__gcd(a, rem) << "\n";
		}
	}
	return 0;
}
