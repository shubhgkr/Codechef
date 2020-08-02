/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 8/1/20.
 * Problem link: https://www.codechef.com/problems/COMPILER
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		std::string s;
		std::cin >> s;
		int cnt = 0;
		int ans = 0;
		for (int i = 0; i < s.length(); ++i) {
			if (s[i] == '<')
				cnt++;
			else {
				cnt--;
				if (cnt == 0)
					ans = std::max(ans, i + 1);
				else if (cnt < 0)
					break;
			}
		}
		std::cout << ans << "\n";
	}
	return 0;
}
