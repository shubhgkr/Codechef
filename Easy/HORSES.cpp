/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 20/09/19.
 * Problem link: https://www.codechef.com/problems/HORSES
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
		std::sort(arr, arr + n);
		int diff = std::abs(arr[0] - arr[1]);
		for (int i = 1; i < n - 1; ++i) {
			diff = std::min(diff, std::abs(arr[i] - arr[i + 1]));
		}
		std::cout << diff << "\n";
	}
	return 0;
}
