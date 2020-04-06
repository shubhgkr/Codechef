/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 4/6/20.
 * Problem link: https://www.codechef.com/problems/CK87MEDI
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
		int k;
		std::cin >> n >> k;
		int arr[n];
		for (int i = 0; i < n; ++i) {
			std::cin >> arr[i];
		}
		std::sort(arr, arr + n);
		std::cout << arr[(n + k) / 2] << "\n";
	}
	return 0;
}
