/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 18/09/19.
 * Problem link: https://www.codechef.com/problems/RECTANGL
 */

#include <iostream>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int arr[4];
		std::cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
		std::sort(arr, arr + 4);
		if (a[0] == a[1] && a[2] == a[3])
			std::cout << "YES\n";
		else
			std::cout << "NO\n";
	}
	return 0;
}
