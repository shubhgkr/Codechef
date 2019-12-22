/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 30/11/19.
 * Problem link: https://www.codechef.com/LTIME78B/problems/CMPRSS
 */

#include <iostream>
#include <vector>

void range_generator(std::vector<int> arr, int len) {
	int pos = 0, pos2 = 0;
	std::string s = "";
	while (pos < len) {
		while (len > ++pos2 && 1 == arr[pos2] - arr[pos2 - 1]);
		if (pos2 - pos > 2) {
			s += std::to_string(arr[pos]) + "..." + std::to_string(arr[pos2 - 1]) + ",";
			pos = pos2;
		} else {
			while (pos2 > pos)
				s += std::to_string(arr[pos++]) + ",";
		}
	}
	std::cout << s.substr(0, s.length() - 1) << "\n";
}

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		std::vector<int> arr(n);
		for (int i = 0; i < n; ++i)
			std::cin >> arr[i];
		range_generator(arr, n);
	}
	return 0;
}
