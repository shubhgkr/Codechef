/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 24/12/19.
 * Problem link: https://www.codechef.com/problems/STRLBP
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	std::string arr[t];
	for (int i = 0; i < t; ++i)
		std::cin >> arr[i];
	for (std::string s:arr) {
		int cnt = 0;
		for (int i = 0; i <= 7; ++i)
			cnt += (s[i % 8] != s[(i + 1) % 8]);
		std::cout << (cnt <= 2 ? "uniform\n" : "non-uniform\n");
	}
	return 0;
}
