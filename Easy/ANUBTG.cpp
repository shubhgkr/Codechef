/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 7/23/20.
 * Problem link: https://www.codechef.com/problems/ANUBTG
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
		long price = 0;
		for (int i = n - 1; i >= 0; i -= 3) {
			price += arr[i];
			i--;
			if (i >= 0)
				price += arr[i];
		}
		std::cout << price << "\n";
	}
	return 0;
}
