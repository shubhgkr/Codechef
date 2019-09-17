/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 17/09/19.
 * Problem link: https://www.codechef.com/problems/LONGSEQ
 */

#include <iostream>
#include <string>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		std::string s;
		std::cin >> s;
		int cnt0 = 0;
		int cnt1 = 0;
		for (char ch : s) {
			if (ch == '0')
				cnt0++;
			else
				cnt1++;
		}
		if (cnt1 == 1 || cnt0 == 1)
			std::cout << "Yes\n";
		else
			std::cout << "No\n";
	}
	return 0;
}
