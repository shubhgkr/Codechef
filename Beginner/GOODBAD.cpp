/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 26/12/19.
 * Problem link: https://www.codechef.com/problems/GOODBAD
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	std::string s;
	while (t--) {
		int n;
		int k;
		std::cin >> n >> k;
		std::cin >> s;
		int up = 0;
		int low = 0;
		for (char ch:s) {
			if (isupper(ch))
				up++;
			else
				low++;
		}
		if (up <= k && low <= k)
			std::cout << "both\n";
		else if (up > k && low > k)
			std::cout << "none\n";
		else if (up <= k && low > k)
			std::cout << "chef\n";
		else if (up > k && low <= k)
			std::cout << "brother\n";
	}
	return 0;
}
