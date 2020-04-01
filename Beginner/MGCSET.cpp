/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 4/1/20.
 * Problem link: https://www.codechef.com/problems/MGCSET
 */

#include <iostream>
#include <cmath>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		int m;
		std::cin >> n >> m;
		long long int cnt = 0;
		int x;
		while (n--) {
			std::cin >> x;
			if (x % m == 0)
				cnt++;
		}
		long long int ans = std::pow(2, cnt) - 1;
		std::cout << ans << "\n";
	}
	return 0;
}
