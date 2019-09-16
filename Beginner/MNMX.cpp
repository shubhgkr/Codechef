/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 16/09/19.
 * https://www.codechef.com/problems/MNMX
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
		int minVal = 100000;
		int x;
		for (int i = 0; i < n; ++i) {
			std::cin >> x;
			minVal = std::min(minVal, x);
		}
		long long int prod = (long long int) minVal * ((long long int) (n - 1));
		std::cout << prod << "\n";
	}
	return 0;
}
