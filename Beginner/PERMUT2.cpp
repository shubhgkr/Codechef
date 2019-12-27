/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 27/12/19.
 * Problem link: https://www.codechef.com/problems/PERMUT2
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	std::cin >> n;
	while (n) {
		int arr[n + 1];
		for (int i = 1; i <= n; ++i) {
			std::cin >> arr[i];
		}
		int invArr[n + 1];
		for (int j = 1; j <= n; ++j) {
			invArr[arr[j]] = j;
		}
		bool flag = true;
		for (int k = 1; k <= n; ++k) {
			if (invArr[k] != arr[k]) {
				flag = false;
				break;
			}
		}
		if (flag)
			std::cout << "ambiguous\n";
		else
			std::cout << "not ambiguous\n";
		std::cin >> n;
	}
	return 0;
}
