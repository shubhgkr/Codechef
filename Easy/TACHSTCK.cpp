/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 7/23/20.
 * Problem link: https://www.codechef.com/problems/TACHSTCK
 */

#include <iostream>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	int d;
	std::cin >> n >> d;
	int arr[n];
	for (int i = 0; i < n; ++i) {
		std::cin >> arr[i];
	}
	std::sort(arr, arr + n);
	int count = 0;
	for (int i = 0; i < n - 1; ++i) {
		if (arr[i + 1] - arr[i] <= d) {
			count++;
			i++;
		}
	}
	std::cout << count;
	return 0;
}
