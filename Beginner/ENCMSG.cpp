/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 10/03/20.
 * Problem link: https://www.codechef.com/problems/ENCMSG
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
		for (int i = 0; i < n - 1; i += 2) {
			std::swap(s[i], s[i + 1]);
		}
		for (int i = 0; i < n; i++) {
			s[i] = 'z' + 'a' - s[i];
		}
		std::cout << s << "\n";
	}
	return 0;
}
