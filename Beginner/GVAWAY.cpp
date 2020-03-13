/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 14/03/20.
 * Problem link: https://www.codechef.com/problems/GVAWAY
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int l;
		int r;
		int k;
		std::cin >> l >> r >> k;
		if (l == r)
			std::cout << "1\n";
		else
			std::cout << k << "\n";
	}
	return 0;
}
