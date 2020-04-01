/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 4/1/20.
 * Problem link: https://www.codechef.com/problems/MAXREM
 */

#include <iostream>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	std::cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i) {
		std::cin >> arr[i];
	}
	std::sort(arr, arr + n, std::greater<int>());
	std::unique(arr, arr + n);
	std::cout << arr[1] % arr[0];
	return 0;
}
