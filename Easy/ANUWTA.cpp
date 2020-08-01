/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 8/1/20.
 * Problem link: https://www.codechef.com/problems/ANUWTA
 */

#include <iostream>
#include <array>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::array<long, 100001> arr{0};
	for (int i = 1; i < arr.size(); ++i) {
		arr[i] = i + 1 + arr[i - 1];
	}
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		std::cout << arr[n] << "\n";
	}
	return 0;
}
