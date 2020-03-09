/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 10/03/20.
 * Problem link: https://www.codechef.com/problems/RECTSQ
 */

#include<iostream>
#include<algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int m;
		int n;
		std::cin >> m >> n;
		int g = std::__gcd(m, n);
		std::cout << (m / g) * (n / g) << "\n";
	}
	return 0;
}
