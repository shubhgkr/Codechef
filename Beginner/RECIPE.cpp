/*
    Created by shubhgkr on 14/8/19.
    https://www.codechef.com/problems/RECIPE
*/

#include <iostream>
#include <vector>
#include <algorithm>

long long int getGCD(const std::vector<int> &arr) {
	int g = arr[0];
	for (int i = 1; i < arr.size(); i++)
		g = std::__gcd(arr[i], g);
	return g;
}

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	int n;
	while (t--) {
		std::cin >> n;
		std::vector<int> arr;
		int x;
		for (int i = 0; i < n; i++) {
			std::cin >> x;
			arr.push_back(x);
		}
		long long int gcd = getGCD(arr);
		for (int i = 0; i < n; i++)
			std::cout << arr[i] / gcd << " ";
		std::cout << "\n";
	}
	return 0;
}