/*
    Created by shubhgkr on 14/8/19.
    https://www.codechef.com/problems/PRB01
*/

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t = 0;
	std::cin >> t;
	while (t--) {
		int n = 0;
		std::cin >> n;

		//aks primality algorithm
		if (n == 2 || n == 3)
			std::cout << "yes\n";
		else if (n == 1 || n % 2 == 0 || n % 3 == 0)
			std::cout << "no\n";
		else {
			int w = 2;
			int fac = 5;
			while ((fac * fac) <= n) {
				if (n % fac == 0)
					break;
				fac += w;
				w = 6 - w;
			}
			if (fac * fac > n)
				std::cout << "yes\n";
			else
				std::cout << "no\n";
		}
	}
	return 0;
}