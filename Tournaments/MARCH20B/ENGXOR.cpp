/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 3/16/20.
 * Problem link: 
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		int q;
		int c[2] = {};
		std::cin >> n >> q;
		for (int i = 0, a; i < n; ++i) {
			std::cin >> a;
			++c[__builtin_parity(a)];
		}
		for (int p; q--;) {
			std::cin >> p;
			int z = __builtin_parity(p);
			std::cout << c[z] << " " << c[z ^ 1] << "\n";
		}
	}
	return 0;
}
