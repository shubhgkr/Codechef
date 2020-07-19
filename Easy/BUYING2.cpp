/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 7/20/20.
 * Problem link: https://www.codechef.com/problems/BUYING2
 */

#include <iostream>
#include <numeric>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		int x;
		std::cin >> n >> x;
		int arr[n];
		for (int i = 0; i < n; i++) {
			std::cin >> arr[i];
		}
		int mn = *std::min_element(arr, arr + n);
		int total = std::accumulate(arr, arr + n, 0);
		if (mn > total % x)
			std::cout << total / x << "\n";
		else
			std::cout << "-1\n";
	}
	return 0;
}
