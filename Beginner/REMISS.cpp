/*
 * Created by shubhgkr on 15/09/19.
 * https://www.codechef.com/problems/REMISS
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int a;
		int b;
		std::cin >> a >> b;
		std::cout << std::max(a, b) << " " << a + b << "\n";
	}
	return 0;
}