/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 09/03/20.
 * Problem link: https://www.codechef.com/problems/SUBGCD
 */

#include <iostream>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		int arr[n];
		for (int i = 0; i < n; ++i) {
			std::cin >> arr[i];
		}
		int gcd = arr[0];
		for (int i = 1; i < n; i++) {
			gcd = std::__gcd(arr[i], gcd);
			if (gcd == 1)
				break;
		}
		if (gcd == 1)
			std::cout << n << "\n";
		else
			std::cout << "-1\n";
	}
	return 0;
}
