/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 4/1/20.
 * Problem link: https://www.codechef.com/problems/CSUM
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
		bool found = false;
		std::sort(arr, arr + n);
		int i = 0;
		int j = n - 1;
		while (i < j) {
			if (arr[i] + arr[j] > k)
				j--;
			else if (arr[i] + arr[j] < k)
				i++;
			else {
				found = 1;
				break;
			}
		}
		std::cout << (found ? "Yes" : "No") << '\n';
	}
	return 0;
}
