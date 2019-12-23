/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 23/12/19.
 * Problem link: https://www.codechef.com/problems/MDL
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
		std::pair<int *, int *> minmax = std::minmax_element(arr, arr + n);
		int mnPos = 0;
		int mxPos = 0;
		for (int j = 0; j < n; ++j) {
			if (arr[j] == *(minmax.first))
				mnPos = j;
			else if (arr[j] == *(minmax.second))
				mxPos = j;
		}
		if (mnPos < mxPos)
			std::cout << arr[mnPos] << " " << arr[mxPos] << "\n";
		else
			std::cout << arr[mxPos] << " " << arr[mnPos] << "\n";
	}
	return 0;
}
