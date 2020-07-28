/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 7/28/20.
 * Problem link: https://www.codechef.com/problems/TWEED
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		std::string player;
		std::cin >> player;
		int arr[n];
		for (int i = 0; i < n; ++i) {
			std::cin >> arr[i];
		}
		if (n == 1 && player == "Dee" && arr[0] % 2 == 0)
			std::cout << "Dee\n";
		else
			std::cout << "Dum\n";
	}
	return 0;
}
