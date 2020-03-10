/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 10/03/20.
 * Problem link: https://www.codechef.com/problems/CHFM
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
		long long int arr[n];
		long long int sum = 0;
		for (int i = 0; i < n; i++) {
			std::cin >> arr[i];
			sum += arr[i];
		}
		int i = 0;
		for (; i < n; i++) {
			if (sum * (n - 1) == n * (sum - arr[i]))
				break;
		}
		if (i == n)
			std::cout << "Impossible\n";
		else
			std::cout << (i + 1) << "\n";
	}
	return 0;
}
