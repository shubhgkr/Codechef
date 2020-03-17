/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 3/17/20.
 * Problem link: https://www.codechef.com/problems/TALAZY
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		long long int n;
		long long int b;
		long long int m;
		std::cin >> n >> b >> m;
		long long int time = -b;
		while (n != 0) {
			if (n & 1) {
				time += (m * ((n + 1) >> 1));
			} else {
				time += (m * (n >> 1));
			}
			n >>= 1;
			time += b;
			m <<= 1;
		}
		std::cout << time << "\n";
	}
	return 0;
}
