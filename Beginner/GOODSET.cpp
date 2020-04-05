/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 4/5/20.
 * Problem link: https://www.codechef.com/problems/GOODSET
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
		int cnt = 1;
		for (int i = 1; i <= n; i++) {
			std::cout << cnt << " ";
			cnt += 2;
		}
		std::cout << "\n";
	}
	return 0;
}
