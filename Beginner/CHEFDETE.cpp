/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 7/26/20.
 * Problem link: https://www.codechef.com/problems/CHEFDETE
 */

#include <iostream>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	std::cin >> n;
	bool arr[n + 1];
	std::fill(arr + 1, arr + n + 1, true);
	for (int i = 1; i <= n; ++i) {
		int pos;
		std::cin >> pos;
		arr[pos] = false;
	}
	for (int i = 1; i <= n; ++i) {
		if (arr[i]) {
			std::cout << i << " ";
		}
	}
	return 0;
}
