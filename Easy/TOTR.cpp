/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 08/03/20.
 * Problem link: https://www.codechef.com/problems/TOTR
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t, i;
	std::string map;
	std::string s;
	std::cin >> t >> map;
	while (t--) {
		std::cin >> s;
		for (i = 0; s[i]; i++) {
			if (islower(s[i])) s[i] = map[s[i] - 'a'];
			else if (isupper(s[i])) s[i] = toupper(map[s[i] - 'A']);
			else if (s[i] == '_') s[i] = ' ';
		}
		std::cout << s << "\n";
	}
	return 0;
}
