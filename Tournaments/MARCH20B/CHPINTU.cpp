/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 06/03/20.
 * Problem link: 
 */

#include <iostream>
#include <unordered_set>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int m;
		int n;
		std::cin >> n >> m;
		int arr[n + 1];
		int price[m + 1];
		std::fill(arr, arr + n + 1, 0);
		std::fill(price, price + m + 1, 0);
		std::unordered_set<int> basket;
		for (int i = 1; i <= n; i++) {
			std::cin >> arr[i];
			basket.insert(arr[i]);
		}
		for (int i = 1; i <= n; i++) {
			int x;
			std::cin >> x;
			price[arr[i]] += x;
		}
		int minPrice = price[*basket.begin()];
		for (auto it = basket.begin(); it != basket.end(); it++) {
			minPrice = std::min(minPrice, price[*it]);
		}
		std::cout << minPrice << "\n";
	}
	return 0;
}
