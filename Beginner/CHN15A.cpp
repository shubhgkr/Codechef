/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 3/18/20.
 * Problem link: https://www.codechef.com/problems/CHN15A
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		int k;
		std::cin >> n >> k;
		k %= 7;
		int arr[n];
		for (int i = 0; i < n; i++)
			std::cin >> arr[i];
		int cnt = 0;
		for (int i = 0; i < n; ++i) {
			if ((arr[i] + k) % 7 == 0)
				cnt++;
		}
		std::cout << cnt << "\n";
	}
	return 0;
}
