/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 22/12/19.
 * Problem link: https://www.codechef.com/COOK113B/problems/CHNGIT
 */

#include <iostream>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	int n;
	while (t--) {
		std::cin >> n;
		int arr[101] = {0};
		int inp;
		for (int i = 1; i <= n; ++i) {
			std::cin >> inp;
			arr[inp]++;
		}
		int mx_cnt = *std::max_element(arr, arr + 101);
		std::cout << (n - mx_cnt) << "\n";
	}
	return 0;
}
