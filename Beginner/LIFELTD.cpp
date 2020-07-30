/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 7/30/20.
 * Problem link: https://www.codechef.com/problems/LIFELTD
 */

#include <iostream>
#include <array>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	std::array<std::array<char, 3>, 3> arr{};
	while (t--) {
		for (int i = 0; i < 3; ++i) {
			for (int j = 0; j < 3; ++j) {
				std::cin >> arr[i][j];
			}
		}
		bool flag = false;
		for (int i = 0; i < 2; ++i) {
			for (int j = 0; j < 2; ++j) {
				if (arr[i][j] == 'l' && arr[i + 1][j] == 'l' && arr[i + 1][j + 1] == 'l') {
					flag = true;
					break;
				}
			}
		}
		if (flag)
			std::cout << "yes\n";
		else
			std::cout << "no\n";
	}
	return 0;
}
