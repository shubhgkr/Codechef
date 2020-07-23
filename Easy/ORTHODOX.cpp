/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 7/19/20.
 * Problem link: https://www.codechef.com/problems/ORTHODOX
 */

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
testcases:
	while (t--) {
		int n;
		std::cin >> n;
		long long int arr[n];
		for (int i = 0; i < n; i++) {
			std::cin >> arr[i];
		}
		if (n > 62) {
			std::cout << "NO\n";
		} else {
			std::vector<long long int> vec;
			for (int i = 0; i < n; ++i) {
				long long int curr = 0;
				for (int j = i; j < n; ++j) {
					curr |= arr[j];
					if (std::find(vec.begin(), vec.end(), curr) != vec.end()) {
						std::cout << "NO\n";
						goto testcases;
					}
					vec.push_back(curr);
				}
			}
			std::cout << "YES\n";
		}
	}
	return 0;
}
