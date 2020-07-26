/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 7/27/20.
 * Problem link: https://www.codechef.com/problems/NAICHEF
 */

#include <iostream>
#include <iomanip>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		int a;
		int b;
		std::cin >> n >> a >> b;
		int cntA = 0;
		int cntB = 0;
		int inp;
		for (int i = 0; i < n; ++i) {
			std::cin >> inp;
			cntA += (inp == a);
			cntB += (inp == b);
		}
		double ans = cntA * cntB * 1.0 / (n * n);
		std::cout << std::fixed << std::setprecision(10) << ans << "\n";
	}
	return 0;
}
