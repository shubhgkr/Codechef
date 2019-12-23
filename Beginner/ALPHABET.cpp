/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 23/12/19.
 * Problem link: https://www.codechef.com/problems/ALPHABET
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::string s;
	bool arr[26];
	std::cin >> s;
	std::fill(arr, arr + 26, false);
	for (char ch:s)
		arr[ch - 'a'] = true;
	int n;
	std::cin >> n;
	std::string inp;
	while (n--) {
		std::cin >> inp;
		bool flag = true;
		for (char ch:inp)
			if (!arr[ch - 'a']) {
				flag = false;
				break;
			}
		std::cout << (flag ? "Yes\n" : "No\n");
	}
	return 0;
}
