/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 25/12/19.
 * Problem link: https://www.codechef.com/problems/NITIKA
 */

#include <iostream>
#include <string>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::string str;
	std::cin >> t;
	std::cin.ignore();
	while (t--) {
		getline(std::cin, str);
		std::string ans;
		std::string tmp;
		for (char ch:str) {
			if (ch == ' ') {
				tmp[0] = std::toupper(tmp[0]);
				ans.push_back(tmp[0]);
				ans += ". ";
				tmp = "";
			} else {
				tmp += ch;
			}
		}
		std::transform(tmp.begin(), tmp.end(), tmp.begin(), ::tolower);
		tmp[0] = std::toupper(tmp[0]);
		ans += tmp;
		std::cout << ans << "\n";
	}
	return 0;
}
