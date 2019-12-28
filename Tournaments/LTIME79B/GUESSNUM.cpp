/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 28/12/19.
 * Problem link: https://www.codechef.com/LTIME79B/problems/GUESSNUM
 */

#include <iostream>
#include <cmath>

long long sol[10000000];
long long rev_sol[10000000];

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		long long a, m;
		long long c = 0, rev_c = 0;
		std::cin >> a >> m;
		for (long long i = 1; i <= (int) pow(m, 0.5); i++) {
			long long d = i;

			if (m % d != 0)continue;
			if ((m / d - 1) % a == 0) {
				long long n = ((m - d) / a);
				if (n != 0)
					rev_sol[rev_c++] = n;
			}
			d = m / d;
			if ((m / d - 1) % a == 0) {
				long long n = ((m - d) / a);
				if (n != 0)
					sol[c++] = n;
			}
		}

		std::cout << c + rev_c << "\n";
		for (int i = 0; i < c; i++)
			std::cout << sol[i] << " ";
		for (int i = rev_c - 1; i >= 0; i--)
			std::cout << rev_sol[i] << " ";
		std::cout << "\n";
	}
}
