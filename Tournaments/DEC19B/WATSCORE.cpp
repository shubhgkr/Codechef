/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 15/12/19.
 * Problem link: https://www.codechef.com/LTIME78B/problems/WATSCORE
 */

#include <iostream>
#include <numeric>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	int arr[11] = {0};
	while (t--) {
		int n;
		std::cin >> n;
		std::fill(std::begin(arr),std::begin(arr)+11,0);
		int pos, value;
		while (n--) {
			std::cin >> pos >> value;
			arr[pos - 1] = std::max(arr[pos - 1], value);
		}
		std::cout << std::accumulate(arr, arr+8, 0)<<"\n";
	}
	return 0;
}
