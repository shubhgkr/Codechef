/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 8/2/20.
 * Problem link: https://www.codechef.com/problems/RRSTONE
 */

#include <iostream>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	int k;
	std::cin >> n >> k;
	long arr[n];
	for (int i = 0; i < n; ++i) {
		std::cin >> arr[i];
	}
	if (k == 0)
		for (long i:arr) {
			std::cout << i << " ";
		}
	else {
		if (k & 1)
			k = 1;
		else
			k = 2;
		for (int i = 1; i <= k; ++i) {
			long mx = *std::max_element(arr, arr + n);
			for (long &item:arr) {
				item = mx - item;
			}
		}
		for (long i:arr) {
			std::cout << i << " ";
		}
	}
	return 0;
}
