/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 19/09/19.
 * Problem link: https://www.codechef.com/problems/STRPALIN
 */

#include <iostream>
#include <string>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	int arr1[26];
	int arr2[26];
	while (t--) {
		std::string a;
		std::string b;
		std::fill(arr1, arr1 + 26, 0);
		std::fill(arr2, arr2 + 26, 0);
		std::cin >> a >> b;
		for (char ch : a) {
			arr1[ch - 'a']++;
		}
		for (char ch : b) {
			arr2[ch - 'a']++;
		}
		bool flag = false;
		for (int i = 0; i < 26; ++i) {
			if (arr1[i] && arr2[i]) {
				flag = true;
				break;
			}
		}
		if (flag)
			std::cout << "Yes\n";
		else
			std::cout << "No\n";
	}
	return 0;
}
