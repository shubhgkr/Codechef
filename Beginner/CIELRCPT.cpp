/*
	Created by shubhgkr on 12/08/19.
	https://www.codechef.com/problems/CIELRCPT
*/

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t = 0;
	std::cin >> t;
	int arr[12] = {2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1};
	while (t--) {
		int p = 0;
		std::cin >> p;
		int c = 0;
		for (int v:arr) {
			c += p / v;
			p %= v;
		}
		std::cout << c << "\n";
	}
	return 0;
}