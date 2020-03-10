/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 10/03/20.
 * Problem link: https://www.codechef.com/problems/STICKS
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
		for (int i = 0; i < n; i++)
			std::cin >> arr[i];
		std::sort(arr, arr + n);
		int max = 0;
		int secMax = 0;
		for (int i = n - 1; i > 0; --i) {
			if (arr[i] == arr[i - 1]) {
				if (max == 0)
					max = arr[i];
				else
					secMax = arr[i];
				--i;
			}
			if (max * secMax)
				break;
		}
		if (max * secMax)
			std::cout << (max * secMax) << "\n";
		else
			std::cout << "-1\n";
	}
	return 0;
}
