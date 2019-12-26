/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 26/12/19.
 * Problem link: https://www.codechef.com/problems/SUMTRIAN
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	std::cin >> n;
	int arr[100][100] = {0};
	while (n--) {
		int row;
		std::cin >> row;
		for (int i = 0; i < row; ++i) {
			for (int j = 0; j <= i; ++j) {
				std::cin >> arr[i][j];
			}
		}
		for (int k = row - 2; k >= 0; --k) {
			for (int i = k; i >= 0; --i) {
				arr[k][i] += std::max(arr[k + 1][i + 1], arr[k + 1][i]);
			}
		}
		std::cout << arr[0][0] << "\n";
		std::fill(arr[0], arr[0] + 100 * 100, 0);
	}
	return 0;
}
