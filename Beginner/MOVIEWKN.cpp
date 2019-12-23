/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 23/12/19.
 * Problem link: https://www.codechef.com/problems/MOVIEWKN
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		int l[n];
		int r[n];
		for (int i = 0; i < n; ++i)
			std::cin >> l[i];
		for (int i = 0; i < n; ++i)
			std::cin >> r[i];
		int mx = l[0] * r[0];
		int pos = 0;
		for (int j = 1; j < n; ++j) {
			int prod = l[j] * r[j];
			if (prod > mx || (prod == mx && r[j] > r[pos])) {
				mx = prod;
				pos = j;
			}
		}
		std::cout << (pos + 1) << "\n";
	}
	return 0;
}
