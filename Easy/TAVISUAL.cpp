/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 8/3/20.
 * Problem link: https://www.codechef.com/problems/TAVISUAL
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		int c;
		int q;
		std::cin >> n >> c >> q;
		int arr[n];
		while (q--) {
			int l;
			int r;
			std::cin >> l >> r;
			if (l <= c && c <= r) {
				c = l + r - c;
			}
		}
		std::cout << c << "\n";
	}
	return 0;
}
