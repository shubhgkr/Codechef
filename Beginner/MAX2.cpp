/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 4/1/20.
 * Problem link: https://www.codechef.com/problems/MAX2
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	int pos = -1;
	bool x;
	std::cin >> n;
	std::string str;
	std::cin >> str;
	for (int i = n - 1; i >= 0; i--) {
		if (str[i] == '1') {
			pos = i;
			break;
		}
	}
	std::cout << n - pos - 1;
	return 0;
}
