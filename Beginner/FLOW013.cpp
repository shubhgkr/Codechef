/*
 * Created by shubhgkr on 15/09/19.
 * https://www.codechef.com/problems/FLOW013
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
		int c;
		std::cin >> a >> b >> c;
		std::cout << (a + b + c == 180 ? "YES\n" : "NO\n");
	}
	return 0;
}