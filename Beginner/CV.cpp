/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 4/5/20.
 * Problem link: https://www.codechef.com/problems/CV
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		std::string s;
		std::cin >> s;
		int cnt = 0;
		std::string str = "aeiou";
		for (int i = 0; i < n - 1; ++i) {
			if ((str.find(s[i]) == std::string::npos) && (str.find(s[i + 1]) != std::string::npos))
				cnt++;
		}
		std::cout << cnt << "\n";
	}
	return 0;
}
