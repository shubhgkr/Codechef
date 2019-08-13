/*
    Created by shubhgkr on 13/8/19.
    https://www.codechef.com/problems/FLOW017
*/
#include <iostream>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	int arr[3];
	std::cin >> t;
	while (t--) {
		std::cin >> arr[0] >> arr[1] >> arr[2];
		std::sort(arr, arr + 3);
		std::cout << arr[1] << "\n";
	}
	return 0;
}