/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 09/03/20.
 * Problem link: https://www.codechef.com/problems/CHEFA
 */

#include<iostream>
#include<algorithm>

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
		long long int sum = 0;
		for (int j = n - 1; j >= 0; j -= 2) {
			sum += arr[j];
		}
		std::cout << sum << "\n";
	}
	return 0;
}
