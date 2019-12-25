/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 25/12/19.
 * Problem link: https://www.codechef.com/problems/NOTINCOM
 */

#include <iostream>
#include <set>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	int x;
	while (t--) {
		int n;
		int m;
		std::cin >> n >> m;
		std::set<int> arr;
		for (int i = 0; i < n; ++i) {
			std::cin >> x;
			arr.insert(x);
		}
		for (int i = 0; i < m; ++i) {
			std::cin >> x;
			arr.insert(x);
		}
		std::cout << (n + m - arr.size()) << "\n";
	}
	return 0;
}
